#ifndef HERBARY_STD_DEFINE___M_X86_64_H_INCLUDED
#define HERBARY_STD_DEFINE___M_X86_64_H_INCLUDED

#undef HERBARY_STD_DEFINE___M_X86_64_H_INCLUDED_BOOL
#define HERBARY_STD_DEFINE___M_X86_64_H_INCLUDED_BOOL 1

#ifdef __M_X86_64
#error "`__M_X86_64` mustn't be pre-defined"
#endif // __M_X86_64

#if defined(__x86_64) \
    || defined(__x86_64__) \
    || defined(__amd64) \
    || defined(__amd64__) \
    || defined(_M_X64)
#define __M_X86_64
#endif

#endif // HERBARY_STD_DEFINE___M_X86_64_H_INCLUDED
