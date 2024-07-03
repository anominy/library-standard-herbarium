
#include "herbary/std/internal/__win32_crt_float.h"

#ifdef _WIN32
#include "herbary/std/define/__M_X86_32.h" // IWYU pragma: keep
#include "herbary/std/define/__declspec.h" // IWYU pragma: keep

#ifndef __FLTUSED__
#define __FLTUSED__
__declspec(
#ifdef _MSC_VER
    selectany
#elif defined(__clang__) || defined(__GNUC__)
    weak
#endif // _MSC_VER
)
int _fltused = 1;
#endif // __FLTUSED__

#ifdef __M_X86_32
#ifdef _MSC_VER
void _ftol(void) {
    __asm {
        push        ebp
        mov         ebp,esp
        sub         esp,20h
        and         esp,0FFFFFFF0h
        fld         st(0)
        fst         dword ptr [esp+18h]
        fistp       qword ptr [esp+10h]
        fild        qword ptr [esp+10h]
        mov         edx,dword ptr [esp+18h]
        mov         eax,dword ptr [esp+10h]
        test        eax,eax
        je          integer_QnaN_or_zero
arg_is_not_integer_QnaN:
        fsubp       st(1),st
        test        edx,edx
        jns         positive
        fstp        dword ptr [esp]
        mov         ecx,dword ptr [esp]
        xor         ecx,80000000h
        add         ecx,7FFFFFFFh
        adc         eax,0
        mov         edx,dword ptr [esp+14h]
        adc         edx,0
        jmp         localexit
positive:
        fstp        dword ptr [esp]
        mov         ecx,dword ptr [esp]
        add         ecx,7FFFFFFFh
        sbb         eax,0
        mov         edx,dword ptr [esp+14h]
        sbb         edx,0
        jmp         localexit
integer_QnaN_or_zero:
        mov         edx,dword ptr [esp+14h]
        test        edx,7FFFFFFFh
        jne         arg_is_not_integer_QnaN
        fstp        dword ptr [esp+18h]
        fstp        dword ptr [esp+18h]
localexit:
        leave
        ret
    }
}

void _ftol2(void) {
    _ftol();
}

void _ftol2_sse(void) {
    _ftol();
}

#if 0
void _dtol3() {
    __asm
    {
    }
}

void _dtoui3() {
    __asm
    {
    }
}

void _dtoul3() {
    __asm
    {
    }
}

void _ftol3() {
    __asm
    {
    }
}

void _ftoui3() {
    __asm
    {
    }
}

void _ftoul3() {
    __asm
    {
    }
}

void _ltod3() {
    __asm
    {
    }
}

void _ultod3() {
    __asm
    {
    }
}
#endif // 0
#endif // _MSC_VER
#endif // __M_X86_32

#endif // _WIN32
