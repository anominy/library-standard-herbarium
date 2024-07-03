#ifndef HERBARY_STD_DEFINE___M_X86_32_H_INCLUDED
#define HERBARY_STD_DEFINE___M_X86_32_H_INCLUDED

#undef HERBARY_STD_DEFINE___M_X86_32_H_INCLUDED_BOOL
#define HERBARY_STD_DEFINE___M_X86_32_H_INCLUDED_BOOL 1

#ifdef __M_X86_32
#error "`__M_X86_32` mustn't be pre-defined"
#endif // __M_X86_32

#if defined(i386) \
    || defined(__i386) \
    || defined(__i386__) \
    || defined(__i486__) \
    || defined(__i586__) \
    || defined(__i686__) \
    || defined(_M_IX86) \
    || defined(_X86_) \
    || defined(_THW_INTEL__) \
    || defined(__I86__) \
    || defined(__INTEL__)
#define __M_X86_32
#endif

#endif // HERBARY_STD_DEFINE___M_X86_32_H_INCLUDED
