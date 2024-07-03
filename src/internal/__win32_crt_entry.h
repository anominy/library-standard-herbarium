#ifdef _WIN32
#ifndef HERBARY_STD_INTERNAL___WIN32_CRT_ENTRY_H_INCLUDED
#define HERBARY_STD_INTERNAL___WIN32_CRT_ENTRY_H_INCLUDED

#ifdef _MSC_VER
#pragma comment(linker, "/NODEFAULTLIB")
#pragma comment(linker, "/ENTRY:__win32_crt_entry")
#pragma comment(linker, "/STACK:0x100000,0x100000")

#ifdef _DEBUG
#pragma comment(linker, "/INCREMENTAL")
#else // !defined(_DEBUG)
// ---------------------------------------------------------
// If you're concerned about the `LNK4202` linker warning,
//  check your compilation flags and remove `/Zi` from them.
// ---------------------------------------------------------
// Building w/ non-debug runtime library & `/Zi` option
//  enabled causes that warning to pop-up in your console.
// ---------------------------------------------------------
#pragma comment(linker, "/INCREMENTAL:NO")
#endif // _DEBUG

#pragma runtime_checks("scu", off)
#endif // _MSC_VER

#include "herbary/std/define/__stdcall.h" // IWYU pragma: keep

int __stdcall __win32_crt_entry(void);

#endif // HERBARY_STD_INTERNAL___WIN32_CRT_ENTRY_H_INCLUDED
#endif // _WIN32
