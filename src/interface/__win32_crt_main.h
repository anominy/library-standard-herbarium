#ifdef _WIN32
#ifndef HERBARY_STD_INTERFACE___WIN32_CRT_MAIN_H_INCLUDED
#define HERBARY_STD_INTERFACE___WIN32_CRT_MAIN_H_INCLUDED

#undef HERBARY_STD_INTERFACE___WIN32_CRT_MAIN_H_INCLUDED_BOOL
#define HERBARY_STD_INTERFACE___WIN32_CRT_MAIN_H_INCLUDED_BOOL 1

#include <tchar.h>

#include "herbary/std/define/__win32_crt.h"

int __win32_crt_main(int argc, __win32_crt_tchar_t **argv);

#endif // HERBARY_STD_INTERFACE___WIN32_CRT_MAIN_H_INCLUDED
#endif // _WIN32
