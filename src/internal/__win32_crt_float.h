#ifdef _WIN32
#ifndef HERBARY_STD_INTERNAL___WIN32_CRT_FLOAT_H_INCLUDED
#define HERBARY_STD_INTERNAL___WIN32_CRT_FLOAT_H_INCLUDED

#include "herbary/std/define/__M_X86_32.h" // IWYU pragma: keep
#include "herbary/std/define/__declspec.h" // IWYU pragma: keep

extern int _fltused;

#ifdef __M_X86_32
__declspec(naked) void _ftol(void);
void _ftol2(void);
void _ftol2_sse(void);
#if 0
__declspec(naked) void _dtol3(void);
__declspec(naked) void _dtoui3(void);
__declspec(naked) void _dtoul3(void);
__declspec(naked) void _ftol3(void);
__declspec(naked) void _ftoui3(void);
__declspec(naked) void _ftoul3(void);
__declspec(naked) void _ltod3(void);
__declspec(naked) void _ultod3(void);
#endif // 0
#endif // __M_X86_32

#endif // HERBARY_STD_INTERNAL___WIN32_CRT_FLOAT_H_INCLUDED
#endif // _WIN32
