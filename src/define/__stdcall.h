#ifndef HERBARY_STD_DEFINE___STDCALL_H_INCLUDED
#define HERBARY_STD_DEFINE___STDCALL_H_INCLUDED

#undef HERBARY_STD_DEFINE___STDCALL_H_INCLUDED_BOOL
#define HERBARY_STD_DEFINE___STDCALL_H_INCLUDED_BOOL 1

#ifndef __stdcall
#ifdef _MSC_VER
#define __stdcall __stdcall
#elif defined(__clang__) || defined(__GNUC__)
#define __stdcall __attribute__((stdcall))
#else // !defined(_MSC_VER) && !defined(__clang__) && !defined(__GNUC__)
#define __stdcall
#endif // _MSC_VER
#endif // __stdcall

#endif // HERBARY_STD_DEFINE___STDCALL_H_INCLUDED
