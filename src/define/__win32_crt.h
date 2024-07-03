#ifdef _WIN32
#ifndef HERBARY_STD_DEFINE___WIN32_CRT_H_INCLUDED
#define HERBARY_STD_DEFINE___WIN32_CRT_H_INCLUDED

#undef HERBARY_STD_DEFINE___WIN32_CRT_H_INCLUDED_BOOL
#define HERBARY_STD_DEFINE___WIN32_CRT_H_INCLUDED_BOOL 1

#ifdef __win32_crt_byte_t
#error "`__win32_crt_byte_t` mustn't be pre-defined"
#endif // __win32_crt_byte_t
#ifdef __win32_crt_uint_t
#error "`__win32_crt_uint_t` mustn't be pre-defined"
#endif // __win32_crt_uint_t
#ifdef __win32_crt_dword_t
#error "`__win32_crt_dword_t` mustn't be pre-defined"
#endif // __win32_crt_dword_t
#ifdef __win32_crt_size_t
#error "`__win32_crt_size_t` mustn't be pre-defined"
#endif // __win32_crt_size_t
#ifdef __win32_crt_char_t
#error "`__win32_crt_char_t` mustn't be pre-defined"
#endif // __win32_crt_char_t
#ifdef __win32_crt_wchar_t
#error "`__win32_crt_wchar_t` mustn't be pre-defined"
#endif // __win32_crt_wchar_t
#ifdef __win32_crt_tchar_t
#error "`__win32_crt_tchar_t` mustn't be pre-defined"
#endif // __win32_crt_tchar_t
#ifdef __win32_crt_uint_ptr_t
#error "`__win32_crt_uint_ptr_t` mustn't be pre-defined"
#endif // __win32_crt_uint_ptr_t
#ifdef __win32_crt_dword_ptr_t
#error "`__win32_crt_dword_ptr_t` mustn't be pre-defined"
#endif // __win32_crt_dword_ptr_t
#ifdef __win32_crt_handle_t
#error "`__win32_crt_handle_t` mustn't be pre-defined"
#endif // __win32_crt_handle_t
#ifdef __win32_crt_hlocal_t
#error "`__win32_crt_hlocal_t` mustn't be pre-defined"
#endif // __win32_crt_hlocal_t
#ifdef __win32_crt_hmodule_t
#error "`__win32_crt_hmodule_t` mustn't be pre-defined"
#endif // __win32_crt_hmodule_t
#ifdef __win32_crt_lcid_t
#error "`__win32_crt_lcid_t` mustn't be pre-defined"
#endif // __win32_crt_lcid_t
#ifdef __win32_crt_exception_disposition_t
#error "`__win32_crt_exception_disposition_t` mustn't be pre-defined"
#endif // __win32_crt_exception_disposition_t
#ifdef __win32_crt_exception_record_t
#error "`__win32_crt_exception_record_t` mustn't be pre-defined"
#endif // __win32_crt_exception_record_t
#ifdef __win32_crt_context_t
#error "`__win32_crt_context_t` mustn't be pre-defined"
#endif // __win32_crt_context_t
#ifdef __win32_crt_dispatcher_context_t
#error "`__win32_crt_dispatcher_context_t` mustn't be pre-defined"
#endif // __win32_crt_dispatcher_context_t
#ifdef __win32_crt_image_load_config_directory32_t
#error "`__win32_crt_image_load_config_directory32_t` mustn't be pre-defined"
#endif // __win32_crt_image_load_config_directory32_t

#define __win32_crt_byte_t BYTE
#define __win32_crt_uint_t UINT
#define __win32_crt_dword_t DWORD
#define __win32_crt_size_t SIZE_T
#define __win32_crt_bool_t BOOL
#define __win32_crt_char_t CHAR
#define __win32_crt_wchar_t WCHAR
#define __win32_crt_tchar_t TCHAR
#define __win32_crt_uint_ptr_t UINT_PTR
#define __win32_crt_dword_ptr_t DWORD_PTR
#define __win32_crt_handle_t HANDLE
#define __win32_crt_hlocal_t HLOCAL
#define __win32_crt_hmodule_t HMODULE
#define __win32_crt_lcid_t LCID
#define __win32_crt_exception_disposition_t EXCEPTION_DISPOSITION
#define __win32_crt_exception_record_t struct _EXCEPTION_RECORD
#define __win32_crt_context_t struct _CONTEXT
#define __win32_crt_dispatcher_context_t struct _DISPATCHER_CONTEXT
#define __win32_crt_image_load_config_directory32_t IMAGE_LOAD_CONFIG_DIRECTORY32

#ifdef __win32_crt_get_command_line
#error "`__win32_crt_get_command_line` mustn't be pre-defined"
#endif // __win32_crt_get_command_line
#ifdef __win32_crt_command_line_to_argv
#error "`__win32_crt_command_line_to_argv` mustn't be pre-defined"
#endif // __win32_crt_command_line_to_argv
#ifdef __win32_crt_exit_process
#error "`__win32_crt_exit_process` mustn't be pre-defined"
#endif // __win32_crt_exit_process
#ifdef __win32_crt_get_std_handle
#error "`__win32_crt_get_std_handle` mustn't be pre-defined"
#endif // __win32_crt_get_std_handle
#ifdef __win32_crt_close_handle
#error "`__win32_crt_close_handle` mustn't be pre-defined"
#endif // __win32_crt_close_handle
#ifdef __win32_crt_write_console
#error "`__win32_crt_write_console` mustn't be pre-defined"
#endif // __win32_crt_write_console
#ifdef __win32_crt_write_console_w
#error "`__win32_crt_write_console_w` mustn't be pre-defined"
#endif // __win32_crt_write_console_w
#ifdef __win32_crt_get_last_error
#error "`__win32_crt_get_last_error` mustn't be pre-defined"
#endif // __win32_crt_get_last_error
#ifdef __win32_crt_set_last_error
#error "`__win32_crt_set_last_error` mustn't be pre-defined"
#endif // __win32_crt_set_last_error
#ifdef __win32_crt_format_message
#error "`__win32_crt_format_message` mustn't be pre-defined"
#endif // __win32_crt_format_message
#ifdef __win32_crt_make_lang_id
#error "`__win32_crt_make_lang_id` mustn't be pre-defined"
#endif // __win32_crt_make_lang_id
#ifdef __win32_crt_local_alloc
#error "`__win32_crt_local_alloc` mustn't be pre-defined"
#endif // __win32_crt_local_alloc
#ifdef __win32_crt_local_free
#error "`__win32_crt_local_free` mustn't be pre-defined"
#endif // __win32_crt_local_free
#ifdef __win32_crt_text
#error "`__win32_crt_text` mustn't be pre-defined"
#endif // __win32_crt_text
#ifdef __win32_crt_tcslen
#error "`__win32_crt_tcslen` mustn't be pre-defined"
#endif // __win32_crt_tcslen
#ifdef __win32_crt_create_file
#error "`__win32_crt_create_file` mustn't be pre-defined"
#endif // __win32_crt_create_file
#ifdef __win32_crt_read_file
#error "`__win32_crt_read_file` mustn't be pre-defined"
#endif // __win32_crt_read_file
#ifdef __win32_crt_get_full_path
#error "`__win32_crt_get_full_path` mustn't be pre-defined"
#endif // __win32_crt_get_full_path
#ifdef __win32_crt_get_process_heap
#error "`__win32_crt_get_process_heap` mustn't be pre-defined"
#endif // __win32_crt_get_process_heap
#ifdef __win32_crt_heap_alloc
#error "`__win32_crt_heap_alloc` mustn't be pre-defined"
#endif // __win32_crt_heap_alloc
#ifdef __win32_crt_heap_re_alloc
#error "`__win32_crt_heap_re_alloc` mustn't be pre-defined"
#endif // __win32_crt_heap_re_alloc
#ifdef __win32_crt_heap_free
#error "`__win32_crt_heap_free` mustn't be pre-defined"
#endif // __win32_crt_heap_free
#ifdef __win32_crt_copy_memory
#error "`__win32_crt_copy_memory` mustn't be pre-defined"
#endif // __win32_crt_copy_memory
#ifdef __win32_crt_move_memory
#error "`__win32_crt_move_memory` mustn't be pre-defined"
#endif // __win32_crt_move_memory
#ifdef __win32_crt_message_box
#error "`__win32_crt_message_box` mustn't be pre-defined"
#endif // __win32_crt_message_box
#ifdef __win32_crt_multi_byte_to_wide_char
#error "`__win32_crt_multi_byte_to_wide_char` mustn't be pre-defined"
#endif // __win32_crt_multi_byte_to_wide_char
#ifdef __win32_crt_wide_char_to_multi_byte
#error "`__win32_crt_wide_char_to_multi_byte` mustn't be pre-defined"
#endif // __win32_crt_wide_char_to_multi_byte
#ifdef __win32_crt_load_library
#error "`__win32_crt_load_library` mustn't be pre-defined"
#endif // __win32_crt_load_library
#ifdef __win32_crt_get_proc_address
#error "`__win32_crt_get_proc_address` mustn't be pre-defined"
#endif // __win32_crt_get_proc_address
#ifdef __win32_crt_raise_exception
#error "`__win32_crt_raise_exception` mustn't be pre-defined"
#endif // __win32_crt_raise_exception
#ifdef __win32_crt_get_exception_code
#error "`__win32_crt_get_exception_code` mustn't be pre-defined"
#endif // __win32_crt_get_exception_code
#ifdef __win32_crt_compare_string
#error "`__win32_crt_compare_string` mustn't be pre-defined"
#endif // __win32_crt_compare_string
#ifdef __win32_crt_compare_string_w
#error "`__win32_crt_compare_string_w` mustn't be pre-defined"
#endif // __win32_crt_compare_string_w

#define __win32_crt_get_command_line GetCommandLine
#ifdef UNICODE
#define __win32_crt_command_line_to_argv CommandLineToArgvW
#else // !defined(UNICODE)
#define __win32_crt_command_line_to_argv CommandLineToArgvA
#endif // UNICODE
#define __win32_crt_exit_process ExitProcess
#define __win32_crt_get_std_handle GetStdHandle
#define __win32_crt_close_handle CloseHandle
#define __win32_crt_write_console WriteConsole
#define __win32_crt_write_console_w WriteConsoleW
#define __win32_crt_get_last_error GetLastError
#define __win32_crt_set_last_error SetLastError
#define __win32_crt_format_message FormatMessage
#define __win32_crt_make_lang_id MAKELANGID
#define __win32_crt_local_alloc LocalAlloc
#define __win32_crt_local_free LocalFree
#define __win32_crt_text TEXT
#define __win32_crt_tcslen _tcslen
#define __win32_crt_create_file CreateFile
#define __win32_crt_read_file ReadFile
#define __win32_crt_get_full_path GetFullPathName
#define __win32_crt_get_process_heap GetProcessHeap
#define __win32_crt_heap_alloc HeapAlloc
#define __win32_crt_heap_re_alloc HeapReAlloc
#define __win32_crt_heap_free HeapFree
#define __win32_crt_copy_memory CopyMemory
#define __win32_crt_move_memory MoveMemory
#define __win32_crt_message_box MessageBox
#define __win32_crt_multi_byte_to_wide_char MultiByteToWideChar
#define __win32_crt_wide_char_to_multi_byte WideCharToMultiByte
#define __win32_crt_load_library LoadLibrary
#define __win32_crt_get_proc_address GetProcAddress
#define __win32_crt_raise_exception RaiseException
#define __win32_crt_get_exception_code GetExceptionCode
#define __win32_crt_compare_string CompareString
#define __win32_crt_compare_string_w CompareStringW

#endif // HERBARY_STD_DEFINE___WIN32_CRT_H_INCLUDED
#endif // _WIN32
