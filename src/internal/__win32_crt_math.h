#ifdef _WIN32
#ifndef HERBARY_STD_INTERNAL___WIN32_CRT_MATH_H_INCLUDED
#define HERBARY_STD_INTERNAL___WIN32_CRT_MATH_H_INCLUDED

#include "herbary/std/define/__M_X86_32.h" // IWYU pragma: keep
#include "herbary/std/define/__declspec.h" // IWYU pragma: keep

#ifdef __M_X86_32
__declspec(naked) void _alldiv(void);
__declspec(naked) void _alldvrm(void);
__declspec(naked) void _allmul(void);
__declspec(naked) void _allrem(void);
__declspec(naked) void _allshl(void);
__declspec(naked) void _allshr(void);
__declspec(naked) void _aulldiv(void);
__declspec(naked) void _aulldvrm(void);
__declspec(naked) void _aullrem(void);
__declspec(naked) void _aullshr(void);
#endif // __M_X86_32

#endif // HERBARY_STD_INTERNAL___WIN32_CRT_MATH_H_INCLUDED
#endif // _WIN32
