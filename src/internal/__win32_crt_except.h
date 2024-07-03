#ifdef _WIN32
#ifndef HERBARY_STD_INTERNAL___WIN32_CRT_EXCEPT_H_INCLUDED
#define HERBARY_STD_INTERNAL___WIN32_CRT_EXCEPT_H_INCLUDED

#include <Windows.h>

#include "herbary/std/define/__M_X86_32.h" // IWYU pragma: keep
#include "herbary/std/define/__M_X86_64.h" // IWYU pragma: keep
#include "herbary/std/define/__win32_crt.h"

#ifdef __M_X86_32
extern void *__safe_se_handler_table[];
extern __win32_crt_byte_t __safe_se_handler_count;
extern __win32_crt_uint_ptr_t __security_cookie;

extern const __win32_crt_image_load_config_directory32_t _load_config_used;

__win32_crt_exception_disposition_t _except_handler3(
    __win32_crt_exception_record_t *exception_record,
    void *establisher_frame,
    __win32_crt_context_t *exception_context,
    void *dispatcher_context
);
#elif defined(__M_X86_64)
__win32_crt_exception_disposition_t __C_specific_handler(
    __win32_crt_exception_record_t *exception_record,
    void *establisher_frame,
    __win32_crt_context_t *exception_context,
    __win32_crt_dispatcher_context_t *dispatcher_context
);
#endif // __M_X86_32

#endif // HERBARY_STD_INTERNAL___WIN32_CRT_EXCEPT_H_INCLUDED
#endif // _WIN32
