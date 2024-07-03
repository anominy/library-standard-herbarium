#include "herbary/std/internal/__win32_crt_entry.h"

#ifdef _WIN32
#ifdef _MSC_VER
#pragma comment(lib, "kernel32.lib")
#pragma comment(lib, "shell32.lib")

#include "herbary/std/define/__M_X86_32.h" // IWYU pragma: keep
#include "herbary/std/define/__M_X86_64.h" // IWYU pragma: keep

#if defined(__M_X86_32) || defined(__M_X86_64)
#ifdef _HERBARY_STD_INTERNAL___WIN32_CRT_ENTRY_C_MANGLE_SYMBOL
#error "`_HERBARY_STD_INTERNAL___WIN32_CRT_ENTRY_C_MANGLE_SYMBOL` mustn't be pre-defined"
#endif // _HERBARY_STD_INTERNAL___WIN32_CRT_ENTRY_C_MANGLE_SYMBOL
#endif // !defined(__M_X86_32) && !defined(__M_X86_64)

#ifdef __M_X86_32
#define _HERBARY_STD_INTERNAL___WIN32_CRT_ENTRY_C_MANGLE_SYMBOL(symbol) \
    "_" #symbol
#elif defined(__M_X86_64)
#define _HERBARY_STD_INTERNAL___WIN32_CRT_ENTRY_C_MANGLE_SYMBOL(symbol) \
    #symbol
#endif // __M_X86_32

#ifdef _HERBARY_STD_INTERNAL___WIN32_CRT_ENTRY_C_MANGLE_SYMBOL
#pragma comment(linker, "/ALTERNATENAME:" \
    _HERBARY_STD_INTERNAL___WIN32_CRT_ENTRY_C_MANGLE_SYMBOL(main) \
    "=" \
    _HERBARY_STD_INTERNAL___WIN32_CRT_ENTRY_C_MANGLE_SYMBOL(_herbary_std___win32_crt_entry_c_main_default) \
)
#pragma comment(linker, "/ALTERNATENAME:" \
    _HERBARY_STD_INTERNAL___WIN32_CRT_ENTRY_C_MANGLE_SYMBOL(__win32_crt_main) \
    "=" \
    _HERBARY_STD_INTERNAL___WIN32_CRT_ENTRY_C_MANGLE_SYMBOL(main) \
)
#undef _HERBARY_STD_INTERNAL___WIN32_CRT_ENTRY_C_MANGLE_SYMBOL
#endif // _HERBARY_STD_INTERNAL___WIN32_CRT_ENTRY_C_MANGLE_SYMBOL
#endif // _MSC_VER

#include <Windows.h>
#include <tchar.h>
#include <shellapi.h>

#include <stdlib.h>

#include "herbary/std/define/_Noreturn.h" // IWYU pragma: keep
#include "herbary/std/define/__win32_crt.h"
#include "herbary/std/interface/__win32_crt_main.h"
#include "herbary/std/implement/CommandLineToArgvA.h"

int _herbary_std___win32_crt_entry_c_main_default(void);
int _herbary_std___win32_crt_entry_c_main_default(void) {
    return EXIT_FAILURE;
}

_Noreturn
int __win32_crt_entry(void) {
    __win32_crt_tchar_t *const command_line = __win32_crt_get_command_line();

    int argc = 0;
    __win32_crt_tchar_t **const argv = __win32_crt_command_line_to_argv(command_line, &argc);

    int result = __win32_crt_main(argc, argv);
    if (result < 0) {
        result = -result;
    }

    __win32_crt_local_free((__win32_crt_hlocal_t)argv);
    __win32_crt_exit_process((__win32_crt_uint_t)result);
}
#endif // _WIN32
