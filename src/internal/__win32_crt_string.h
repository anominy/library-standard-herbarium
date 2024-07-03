#ifdef _WIN32
#ifndef HERBARY_STD_INTERNAL___WIN32_CRT_STRING_H_INCLUDED
#define HERBARY_STD_INTERNAL___WIN32_CRT_STRING_H_INCLUDED

#include <stddef.h>
#include <wchar.h>

size_t strlen(const char *str);
size_t wcslen(const wchar_t *str);

#endif // HERBARY_STD_INTERNAL___WIN32_CRT_STRING_H_INCLUDED
#endif // _WIN32
