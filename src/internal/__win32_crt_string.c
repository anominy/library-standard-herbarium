#include "herbary/std/internal/__win32_crt_string.h"

#ifdef _WIN32
#include <stddef.h>
#include <wchar.h>

#ifdef _HERBARY_STD___WIN32_CRT_STRING_C_PARRLEN_IMPL
#error "`_HERBARY_STD___WIN32_CRT_STRING_C_PARRLEN_IMPL` mustn't be pre-defined"
#endif // _HERBARY_STD___WIN32_CRT_STRING_C_PARRLEN_IMPL

#define _HERBARY_STD___WIN32_CRT_STRING_C_PARRLEN_IMPL(arr) \
    if (!arr) { \
        return 0; \
    } \
    size_t count = 0; \
    while (*arr++) { \
        ++count; \
    } \
    return count;

size_t strlen(const char *str) {
    _HERBARY_STD___WIN32_CRT_STRING_C_PARRLEN_IMPL(str);
}

size_t wcslen(const wchar_t *str) {
    _HERBARY_STD___WIN32_CRT_STRING_C_PARRLEN_IMPL(str);
}

#undef _HERBARY_STD___WIN32_CRT_STRING_C_PARRLEN_IMPL
#endif // _WIN32
