#include "herbary/std/internal/__win32_crt_memory.h"

#ifdef _WIN32
#include <stddef.h>
#include <stdint.h>

void * memset(void *dest, int c, size_t count) {
    if (!dest || count == 0) {
        return dest;
    }

    uint8_t *dest_bytes = (uint8_t *)dest;

    while (count--) {
        *dest_bytes++ = (uint8_t)c;
    }

    return dest;
}

void * memcpy(void *dest, const void *src, size_t count) {
    if (!dest || !src
            || dest == src
            || count == 0) {
        return dest;
    }

    uint8_t *dest_bytes = (uint8_t *)dest;
    const uint8_t *src_bytes = (const uint8_t *)src;

    while (count--) {
        *dest_bytes++ = *src_bytes++;
    }

    return dest;
}

void * memmove(void *dest, const void *src, size_t count) {
    if (!dest || !src
            || dest == src
            || count == 0) {
        return dest;
    }

    uint8_t *dest_bytes = (uint8_t *)dest;
    const uint8_t *src_bytes = (const uint8_t *)src;

    if ((uintptr_t)dest_bytes < (uintptr_t)src_bytes) {
        while (count--) {
            *dest_bytes++ = *src_bytes++;
        }

        return dest;
    }

    dest_bytes += count - 1;
    src_bytes += count - 1;

    while (count--) {
        *dest_bytes-- = *src_bytes--;
    }

    return dest;
}
#endif // _WIN32
