#ifndef HERBARY_STD_DEFINE___DECLSPEC_H_INCLUDED
#define HERBARY_STD_DEFINE___DECLSPEC_H_INCLUDED

#undef HERBARY_STD_DEFINE___DECLSPEC_H_INCLUDED_BOOL
#define HERBARY_STD_DEFINE___DECLSPEC_H_INCLUDED_BOOL 1

#ifndef __declspec
#ifdef _MSC_VER
#define __declspec __declspec
#elif defined(__clang__) || defined(__GNUC__)
#define __declspec(...) __attribute__((__VA_ARGS__))
#else // !defined(_MSC_VER) && !defined(__clang__) && !defined(__GNUC__)
#define __declspec(...)
#endif // _MSC_VER
#endif // __declspec

#endif // HERBARY_STD_DEFINE___DECLSPEC_H_INCLUDED
