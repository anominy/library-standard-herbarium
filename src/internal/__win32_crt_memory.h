#ifdef _WIN32
#ifndef HERBARY_STD_INTERNAL___WIN32_CRT_MEMORY_H_INCLUDED
#define HERBARY_STD_INTERNAL___WIN32_CRT_MEMORY_H_INCLUDED

#include <stddef.h>

void * memset(void *dest, int c, size_t count);
void * memcpy(void *dest, const void *src, size_t count);
void * memmove(void *dest, const void *src, size_t count);

#endif // HERBARY_STD_INTERNAL___WIN32_CRT_MEMORY_H_INCLUDED
#endif // _WIN32
