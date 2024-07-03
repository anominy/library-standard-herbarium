#include "herbary/std/internal/__win32_crt_except.h"

#ifdef _WIN32
#ifdef _MSC_VER
#pragma comment(lib, "kernel32.lib")
#endif // _MSC_VER

#include <Windows.h>

#include <stddef.h>

#include "herbary/std/define/__M_X86_32.h" // IWYU pragma: keep
#include "herbary/std/define/__M_X86_64.h" // IWYU pragma: keep
#include "herbary/std/define/__win32_crt.h"

#ifdef _HERBARY_STD_INTERNAL___WIN32_CRT_EXCEPT_C_MSVCRT_DLL_NAME
#error "`_HERBARY_STD_INTERNAL___WIN32_CRT_EXCEPT_C_MSVCRT_DLL_NAME` mustn't be pre-defined"
#endif // _HERBARY_STD_INTERNAL___WIN32_CRT_EXCEPT_C_MSVCRT_DLL_NAME

#define _HERBARY_STD_INTERNAL___WIN32_CRT_EXCEPT_C_MSVCRT_DLL_NAME \
    __win32_crt_text("msvcrt.dll")

#ifdef EXCEPTION_CONTINUE_EXECUTION
#ifdef _HERBARY_STD_INTERNAL___WIN32_CRT_EXCEPT_C_EXCEPTION_CONTINUE_EXECUTION_BACKUP
#error "`_HERBARY_STD_INTERNAL___WIN32_CRT_EXCEPT_C_EXCEPTION_CONTINUE_EXECUTION_BACKUP` mustn't be pre-defined"
#endif // _HERBARY_STD_INTERNAL___WIN32_CRT_EXCEPT_C_EXCEPTION_CONTINUE_EXECUTION_BACKUP

#define _HERBARY_STD_INTERNAL___WIN32_CRT_EXCEPT_C_EXCEPTION_CONTINUE_EXECUTION_BACKUP \
    EXCEPTION_CONTINUE_EXECUTION

#undef EXCEPTION_CONTINUE_EXECUTION
#endif // EXCEPTION_CONTINUE_EXECUTION

#define EXCEPTION_CONTINUE_EXECUTION \
    ExceptionContinueExecution

#ifdef __M_X86_32
__win32_crt_uint_ptr_t __security_cookie = 0xBB40E64E;

const __win32_crt_image_load_config_directory32_t _load_config_used = {
    (__win32_crt_dword_t)sizeof(__win32_crt_image_load_config_directory32_t),
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (__win32_crt_dword_t)&__security_cookie,
    (__win32_crt_dword_t)__safe_se_handler_table,
    (__win32_crt_dword_t)(__win32_crt_dword_ptr_t)&__safe_se_handler_count,
    0,
    0,
    0,
    0,
    0,
    {0},
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};

__win32_crt_exception_disposition_t _except_handler3(
    __win32_crt_exception_record_t *exception_record,
    void *establisher_frame,
    __win32_crt_context_t *exception_context,
    void *dispatcher_context
) {
    typedef __win32_crt_exception_disposition_t _except_handler3_fn_t(
        __win32_crt_exception_record_t *,
        void *,
        __win32_crt_context_t *,
        void *
    );
    static _except_handler3_fn_t *function = NULL;

    if (!function) {
        const __win32_crt_hmodule_t library = __win32_crt_load_library(
            _HERBARY_STD_INTERNAL___WIN32_CRT_EXCEPT_C_MSVCRT_DLL_NAME);

        if (!library) {
            return EXCEPTION_CONTINUE_EXECUTION;
        }

        function = (_except_handler3_fn_t *)__win32_crt_get_proc_address(library, "_except_handler3");
    }

    if (!function) {
        return EXCEPTION_CONTINUE_EXECUTION;
    }

    return function(exception_record, establisher_frame, exception_context, dispatcher_context);
}
#elif defined(__M_X86_64)
__win32_crt_exception_disposition_t __C_specific_handler(
    __win32_crt_exception_record_t *exception_record,
    void *establisher_frame,
    __win32_crt_context_t *exception_context,
    __win32_crt_dispatcher_context_t *dispatcher_context
) {
    typedef __win32_crt_exception_disposition_t __C_specific_handler_fn_t(
        __win32_crt_exception_record_t *exception_record,
        void *establisher_frame,
        __win32_crt_context_t *exception_context,
        __win32_crt_dispatcher_context_t *dispatcher_context
    );
    static __C_specific_handler_fn_t *function = NULL;

    if (!function) {
        const __win32_crt_hmodule_t library = __win32_crt_load_library(
            _HERBARY_STD_INTERNAL___WIN32_CRT_EXCEPT_C_MSVCRT_DLL_NAME);

        if (!library) {
            return EXCEPTION_CONTINUE_EXECUTION;
        }

        function = (__C_specific_handler_fn_t *)__win32_crt_get_proc_address(library, "__C_specific_handler");
    }

    if (!function) {
        return EXCEPTION_CONTINUE_EXECUTION;
    }

    return function(exception_record, establisher_frame, exception_context, dispatcher_context);
}
#endif // __M_X86_32

#undef EXCEPTION_CONTINUE_EXECUTION

#ifdef _HERBARY_STD_INTERNAL___WIN32_CRT_EXCEPT_C_EXCEPTION_CONTINUE_EXECUTION_BACKUP
#define EXCEPTION_CONTINUE_EXECUTION \
    _HERBARY_STD_INTERNAL___WIN32_CRT_EXCEPT_C_EXCEPTION_CONTINUE_EXECUTION_BACKUP

#undef _HERBARY_STD_INTERNAL___WIN32_CRT_EXCEPT_C_EXCEPTION_CONTINUE_EXECUTION_BACKUP
#endif // _HERBARY_STD_INTERNAL___WIN32_CRT_EXCEPT_C_EXCEPTION_CONTINUE_EXECUTION_BACKUP

#undef _HERBARY_STD_INTERNAL___WIN32_CRT_EXCEPT_C_MSVCRT_DLL_NAME
#endif // _WIN32
