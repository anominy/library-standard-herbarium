#if 0

#ifdef _WIN32
#ifdef _MSC_VER
#pragma comment(linker, "/SUBSYSTEM:CONSOLE")

#pragma comment(lib, "kernel32.lib")
#endif // _MSC_VER

#include <Windows.h>
#include <tchar.h>

#include <stdlib.h>
#include <stddef.h>

#include "herbary/std/define/__win32_crt.h"

int main(void) {
    const __win32_crt_handle_t hstdout = __win32_crt_get_std_handle(STD_OUTPUT_HANDLE);
    if (!hstdout || hstdout == INVALID_HANDLE_VALUE) {
        return EXIT_FAILURE;
    }

    const __win32_crt_tchar_t *output_message = __win32_crt_text("Hey, 💕 Cutie! ^^\n");
    const size_t output_length = __win32_crt_tcslen(output_message);

    const __win32_crt_bool_t is_written = __win32_crt_write_console(hstdout, output_message, output_length, NULL, NULL);
    if (is_written) {
        return EXIT_SUCCESS;
    }

    __win32_crt_dword_t error_code = __win32_crt_get_last_error();
    if (!error_code) {
        return EXIT_FAILURE;
    }

    const __win32_crt_handle_t hstderr = __win32_crt_get_std_handle(STD_ERROR_HANDLE);
    if (!hstderr || hstderr == INVALID_HANDLE_VALUE) {
        return EXIT_FAILURE;
    }

    const __win32_crt_dword_t format_flags = FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS;
    const __win32_crt_dword_t error_language = __win32_crt_make_lang_id(LANG_NEUTRAL, SUBLANG_DEFAULT);

    __win32_crt_tchar_t *error_message = NULL;
    const __win32_crt_dword_t error_length = __win32_crt_format_message(format_flags, NULL, error_code, error_language, (__win32_crt_tchar_t *)&error_message, 0, NULL);
    if (!error_length) {
        return EXIT_FAILURE;
    }

    __win32_crt_write_console(hstderr, error_message, error_length, NULL, NULL);
    __win32_crt_local_free((__win32_crt_hlocal_t)error_message);

    return EXIT_FAILURE;
}
#else // !defined(_WIN32)
#include <stdlib.h>

int main(void) {
    return EXIT_FAILURE;
}
#endif // _WIN32

#endif // 0
