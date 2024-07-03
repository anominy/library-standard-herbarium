#include "herbary/std/implement/CommandLineToArgvA.h"

#ifdef _WIN32
#ifdef _MSC_VER
#pragma comment(lib, "kernel32.lib")
#pragma comment(lib, "shell32.lib")
#endif // _MSC_VER

#include <Windows.h>
#include <shellapi.h>

#include <stddef.h>

#include "herbary/std/define/__win32_crt.h"

__win32_crt_char_t ** CommandLineToArgvA(__win32_crt_char_t *command_line, int *argc) {
    const __win32_crt_uint_t code_page = CP_ACP;
    const __win32_crt_dword_t flags = MB_ERR_INVALID_CHARS;

    const int command_line_wide_length = __win32_crt_multi_byte_to_wide_char(code_page, flags, command_line, -1, NULL, 0);
    if (!command_line_wide_length) {
        return NULL;
    }

    const __win32_crt_handle_t hprocheap = __win32_crt_get_process_heap();
    if (!hprocheap || hprocheap == INVALID_HANDLE_VALUE) {
        return NULL;
    }

    const __win32_crt_size_t command_line_wide_size = (__win32_crt_size_t)command_line_wide_length * (__win32_crt_size_t)sizeof(__win32_crt_wchar_t);
    __win32_crt_wchar_t *const command_line_wide = __win32_crt_heap_alloc(hprocheap, 0, command_line_wide_size);
    if (!command_line_wide) {
        return NULL;
    }

    const int is_success = __win32_crt_multi_byte_to_wide_char(code_page, flags, command_line, -1, command_line_wide, command_line_wide_length);
    if (!is_success) {
        __win32_crt_heap_free(hprocheap, 0, command_line_wide);
        return NULL;
    }

    __win32_crt_wchar_t **const argv_wide = CommandLineToArgvW(command_line_wide, argc);
    __win32_crt_heap_free(hprocheap, 0, command_line_wide);

    if (!argv_wide) {
        return NULL;
    }

    int argv_size = (int)((__win32_crt_size_t)*argc * (__win32_crt_size_t)sizeof(__win32_crt_char_t *));
    for (int i = 0; i < *argc; ++i) {
        const int arg_size = __win32_crt_wide_char_to_multi_byte(code_page, 0, argv_wide[i], -1, NULL, 0, NULL, NULL);
        if (!arg_size) {
            __win32_crt_local_free((__win32_crt_hlocal_t)argv_wide);
            return NULL;
        }

        argv_size += arg_size;
    }

    __win32_crt_char_t **const argv = (__win32_crt_char_t **)__win32_crt_local_alloc(LMEM_FIXED, (__win32_crt_size_t)argv_size);
    if (!argv) {
        __win32_crt_local_free((__win32_crt_hlocal_t)argv_wide);
        return NULL;
    }

    int buff_size = argv_size - *argc * (int)sizeof(__win32_crt_char_t *);
    if (buff_size <= 0) {
        __win32_crt_local_free((__win32_crt_hlocal_t)argv);
        __win32_crt_local_free((__win32_crt_hlocal_t)argv_wide);
        return NULL;
    }

    const __win32_crt_size_t buff_offset = (__win32_crt_size_t)*argc * (__win32_crt_size_t)sizeof(__win32_crt_char_t *);
    __win32_crt_char_t *buff = (__win32_crt_char_t *)argv + buff_offset;

    for (int i = 0; i < *argc; ++i) {
        const int arg_size = __win32_crt_wide_char_to_multi_byte(code_page, 0, argv_wide[i], -1, buff, buff_size, NULL, NULL);
        if (!arg_size) {
            __win32_crt_local_free((__win32_crt_hlocal_t)argv);
            __win32_crt_local_free((__win32_crt_hlocal_t)argv_wide);
            return NULL;
        }

        argv[i] = buff;
        buff += arg_size;
        buff_size -= arg_size;
    }

    __win32_crt_local_free((__win32_crt_hlocal_t)argv_wide);
    return argv;
}
#endif // _WIN32
