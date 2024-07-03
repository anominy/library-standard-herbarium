#include "herbary/std/internal/__win32_crt_math.h"

#ifdef _WIN32
#include "herbary/std/define/__M_X86_32.h" // IWYU pragma: keep

#ifdef __M_X86_32
#ifdef _MSC_VER
void _alldiv(void) {
    __asm {
        push        edi
        push        esi
        push        ebx
        xor         edi,edi
        mov         eax,dword ptr [esp+14h]
        or          eax,eax
        jge         L1
        inc         edi
        mov         edx,dword ptr [esp+10h]
        neg         eax
        neg         edx
        sbb         eax,0
        mov         dword ptr [esp+14h],eax
        mov         dword ptr [esp+10h],edx
L1:
        mov         eax,dword ptr [esp+1Ch]
        or          eax,eax
        jge         L2
        inc         edi
        mov         edx,dword ptr [esp+18h]
        neg         eax
        neg         edx
        sbb         eax,0
        mov         dword ptr [esp+1Ch],eax
        mov         dword ptr [esp+18h],edx
L2:
        or          eax,eax
        jne         L3
        mov         ecx,dword ptr [esp+18h]
        mov         eax,dword ptr [esp+14h]
        xor         edx,edx
        div         ecx
        mov         ebx,eax
        mov         eax,dword ptr [esp+10h]
        div         ecx
        mov         edx,ebx
        jmp         L4
L3:
        mov         ebx,eax
        mov         ecx,dword ptr [esp+18h]
        mov         edx,dword ptr [esp+14h]
        mov         eax,dword ptr [esp+10h]
L5:
        shr         ebx,1
        rcr         ecx,1
        shr         edx,1
        rcr         eax,1
        or          ebx,ebx
        jne         L5
        div         ecx
        mov         esi,eax
        mul         dword ptr [esp+1Ch]
        mov         ecx,eax
        mov         eax,dword ptr [esp+18h]
        mul         esi
        add         edx,ecx
        jb          L6
        cmp         edx,dword ptr [esp+14h]
        ja          L6
        jb          L7
        cmp         eax,dword ptr [esp+10h]
        jbe         L7
L6:
        dec         esi
L7:
        xor         edx,edx
        mov         eax,esi
L4:
        dec         edi
        jne         L8
        neg         edx
        neg         eax
        sbb         edx,0
L8:
        pop         ebx
        pop         esi
        pop         edi
        ret         10h
    }
}

void _alldvrm(void) {
    __asm {
        push        edi
        push        esi
        push        ebp
        xor         edi,edi
        xor         ebp,ebp
        mov         eax,dword ptr [esp+14h]
        or          eax,eax
        jge         L1
        inc         edi
        inc         ebp
        mov         edx,dword ptr [esp+10h]
        neg         eax
        neg         edx
        sbb         eax,0
        mov         dword ptr [esp+14h],eax
        mov         dword ptr [esp+10h],edx
L1:
        mov         eax,dword ptr [esp+1Ch]
        or          eax,eax
        jge         L2
        inc         edi
        mov         edx,dword ptr [esp+18h]
        neg         eax
        neg         edx
        sbb         eax,0
        mov         dword ptr [esp+1Ch],eax
        mov         dword ptr [esp+18h],edx
L2:
        or          eax,eax
        jne         L3
        mov         ecx,dword ptr [esp+18h]
        mov         eax,dword ptr [esp+14h]
        xor         edx,edx
        div         ecx
        mov         ebx,eax
        mov         eax,dword ptr [esp+10h]
        div         ecx
        mov         esi,eax
        mov         eax,ebx
        mul         dword ptr [esp+18h]
        mov         ecx,eax
        mov         eax,esi
        mul         dword ptr [esp+18h]
        add         edx,ecx
        jmp         L4
L3:
        mov         ebx,eax
        mov         ecx,dword ptr [esp+18h]
        mov         edx,dword ptr [esp+14h]
        mov         eax,dword ptr [esp+10h]
L5:
        shr         ebx,1
        rcr         ecx,1
        shr         edx,1
        rcr         eax,1
        or          ebx,ebx
        jne         L5
        div         ecx
        mov         esi,eax
        mul         dword ptr [esp+1Ch]
        mov         ecx,eax
        mov         eax,dword ptr [esp+18h]
        mul         esi
        add         edx,ecx
        jb          L6
        cmp         edx,dword ptr [esp+14h]
        ja          L6
        jb          L7
        cmp         eax,dword ptr [esp+10h]
        jbe         L7
L6:
        dec         esi
        sub         eax,dword ptr [esp+18h]
        sbb         edx,dword ptr [esp+1Ch]
L7:
        xor         ebx,ebx
L4:
        sub         eax,dword ptr [esp+10h]
        sbb         edx,dword ptr [esp+14h]
        dec         ebp
        jns         L9
        neg         edx
        neg         eax
        sbb         edx,0
L9:
        mov         ecx,edx
        mov         edx,ebx
        mov         ebx,ecx
        mov         ecx,eax
        mov         eax,esi
        dec         edi
        jne         L8
        neg         edx
        neg         eax
        sbb         edx,0
L8:
        pop         ebp
        pop         esi
        pop         edi
        ret         10h
    }
}

void _allmul(void) {
    __asm {
        mov         eax, dword ptr[esp+8]
        mov         ecx, dword ptr[esp+10h]
        or          ecx, eax
        mov         ecx, dword ptr[esp+0Ch]
        jne         hard
        mov         eax, dword ptr[esp+4]
        mul         ecx
        ret         10h
hard:
        push        ebx
        mul         ecx
        mov         ebx, eax
        mov         eax, dword ptr[esp+8]
        mul         dword ptr[esp+14h]
        add         ebx, eax
        mov         eax, dword ptr[esp+8]
        mul         ecx
        add         edx, ebx
        pop         ebx
        ret         10h
    }
}

void _allrem(void) {
    __asm {
        push        ebx
        push        edi
        xor         edi,edi
        mov         eax,dword ptr [esp+10h]
        or          eax,eax
        jge         L1
        inc         edi
        mov         edx,dword ptr [esp+0Ch]
        neg         eax
        neg         edx
        sbb         eax,0
        mov         dword ptr [esp+10h],eax
        mov         dword ptr [esp+0Ch],edx
L1:
        mov         eax,dword ptr [esp+18h]
        or          eax,eax
        jge         L2
        mov         edx,dword ptr [esp+14h]
        neg         eax
        neg         edx
        sbb         eax,0
        mov         dword ptr [esp+18h],eax
        mov         dword ptr [esp+14h],edx
L2:
        or          eax,eax
        jne         L3
        mov         ecx,dword ptr [esp+14h]
        mov         eax,dword ptr [esp+10h]
        xor         edx,edx
        div         ecx
        mov         eax,dword ptr [esp+0Ch]
        div         ecx
        mov         eax,edx
        xor         edx,edx
        dec         edi
        jns         L4
        jmp         L8
L3:
        mov         ebx,eax
        mov         ecx,dword ptr [esp+14h]
        mov         edx,dword ptr [esp+10h]
        mov         eax,dword ptr [esp+0Ch]
L5:
        shr         ebx,1
        rcr         ecx,1
        shr         edx,1
        rcr         eax,1
        or          ebx,ebx
        jne         L5
        div         ecx
        mov         ecx,eax
        mul         dword ptr [esp+18h]
        xchg        eax,ecx
        mul         dword ptr [esp+14h]
        add         edx,ecx
        jb          L6
        cmp         edx,dword ptr [esp+10h]
        ja          L6
        jb          L7
        cmp         eax,dword ptr [esp+0Ch]
        jbe         L7
L6:
        sub         eax,dword ptr [esp+14h]
        sbb         edx,dword ptr [esp+18h]
L7:
        sub         eax,dword ptr [esp+0Ch]
        sbb         edx,dword ptr [esp+10h]
        dec         edi
        jns         L8
L4:
        neg         edx
        neg         eax
        sbb         edx,0
L8:
        pop         edi
        pop         ebx
        ret         10h
    }
}

void _allshl(void) {
    __asm {
        cmp         cl,40h
        jae         RETZERO
        cmp         cl,20h
        jae         MORE32
        shld        edx,eax,cl
        shl         eax,cl
        ret
MORE32:
        mov         edx,eax
        xor         eax,eax
        and         cl,1Fh
        shl         edx,cl
        ret
RETZERO:
        xor         eax,eax
        xor         edx,edx
        ret
    }
}

void _allshr(void) {
    __asm {
        cmp         cl,3Fh
        jae         RETSIGN
        cmp         cl,20h
        jae         MORE32
        shrd        eax,edx,cl
        sar         edx,cl
        ret
MORE32:
        mov         eax,edx
        sar         edx,1Fh
        and         cl,1Fh
        sar         eax,cl
        ret
RETSIGN:
        sar         edx,1Fh
        mov         eax,edx
        ret
    }
}

void _aulldiv(void) {
    __asm {
        push        ebx
        push        esi
        mov         eax,dword ptr [esp+18h]
        or          eax,eax
        jne         L1
        mov         ecx,dword ptr [esp+14h]
        mov         eax,dword ptr [esp+10h]
        xor         edx,edx
        div         ecx
        mov         ebx,eax
        mov         eax,dword ptr [esp+0Ch]
        div         ecx
        mov         edx,ebx
        jmp         L2
L1:
        mov         ecx,eax
        mov         ebx,dword ptr [esp+14h]
        mov         edx,dword ptr [esp+10h]
        mov         eax,dword ptr [esp+0Ch]
L3:
        shr         ecx,1
        rcr         ebx,1
        shr         edx,1
        rcr         eax,1
        or          ecx,ecx
        jne         L3
        div         ebx
        mov         esi,eax
        mul         dword ptr [esp+18h]
        mov         ecx,eax
        mov         eax,dword ptr [esp+14h]
        mul         esi
        add         edx,ecx
        jb          L4
        cmp         edx,dword ptr [esp+10h]
        ja          L4
        jb          L5
        cmp         eax,dword ptr [esp+0Ch]
        jbe         L5
L4:
        dec         esi
L5:
        xor         edx,edx
        mov         eax,esi
L2:
        pop         esi
        pop         ebx
        ret         10h
    }
}

void _aulldvrm(void) {
    __asm {
        push        esi
        mov         eax,dword ptr [esp+14h]
        or          eax,eax
        jne         L1
        mov         ecx,dword ptr [esp+10h]
        mov         eax,dword ptr [esp+0Ch]
        xor         edx,edx
        div         ecx
        mov         ebx,eax
        mov         eax,dword ptr [esp+8]
        div         ecx
        mov         esi,eax
        mov         eax,ebx
        mul         dword ptr [esp+10h]
        mov         ecx,eax
        mov         eax,esi
        mul         dword ptr [esp+10h]
        add         edx,ecx
        jmp         L2
L1:
        mov         ecx,eax
        mov         ebx,dword ptr [esp+10h]
        mov         edx,dword ptr [esp+0Ch]
        mov         eax,dword ptr [esp+8]
L3:
        shr         ecx,1
        rcr         ebx,1
        shr         edx,1
        rcr         eax,1
        or          ecx,ecx
        jne         L3
        div         ebx
        mov         esi,eax
        mul         dword ptr [esp+14h]
        mov         ecx,eax
        mov         eax,dword ptr [esp+10h]
        mul         esi
        add         edx,ecx
        jb          L4
        cmp         edx,dword ptr [esp+0Ch]
        ja          L4
        jb          L5
        cmp         eax,dword ptr [esp+8]
        jbe         L5
L4:
        dec         esi
        sub         eax,dword ptr [esp+10h]
        sbb         edx,dword ptr [esp+14h]
L5:
        xor         ebx,ebx
L2:
        sub         eax,dword ptr [esp+8]
        sbb         edx,dword ptr [esp+0Ch]
        neg         edx
        neg         eax
        sbb         edx,0
        mov         ecx,edx
        mov         edx,ebx
        mov         ebx,ecx
        mov         ecx,eax
        mov         eax,esi
        pop         esi
        ret         10h
    }
}

void _aullrem(void) {
    __asm {
        push        ebx
        mov         eax,dword ptr [esp+14h]
        or          eax,eax
        jne         L1
        mov         ecx,dword ptr [esp+10h]
        mov         eax,dword ptr [esp+0Ch]
        xor         edx,edx
        div         ecx
        mov         eax,dword ptr [esp+8]
        div         ecx
        mov         eax,edx
        xor         edx,edx
        jmp         L2
L1:
        mov         ecx,eax
        mov         ebx,dword ptr [esp+10h]
        mov         edx,dword ptr [esp+0Ch]
        mov         eax,dword ptr [esp+8]
L3:
        shr         ecx,1
        rcr         ebx,1
        shr         edx,1
        rcr         eax,1
        or          ecx,ecx
        jne         L3
        div         ebx
        mov         ecx,eax
        mul         dword ptr [esp+14h]
        xchg        eax,ecx
        mul         dword ptr [esp+10h]
        add         edx,ecx
        jb          L4
        cmp         edx,dword ptr [esp+0Ch]
        ja          L4
        jb          L5
        cmp         eax,dword ptr [esp+8]
        jbe         L5
L4:
        sub         eax,dword ptr [esp+10h]
        sbb         edx,dword ptr [esp+14h]
L5:
        sub         eax,dword ptr [esp+8]
        sbb         edx,dword ptr [esp+0Ch]
        neg         edx
        neg         eax
        sbb         edx,0
L2:
        pop         ebx
        ret         10h
    }
}

void _aullshr(void) {
    __asm {
        cmp         cl,40h
        jae         RETZERO
        cmp         cl,20h
        jae         MORE32
        shrd        eax,edx,cl
        shr         edx,cl
        ret
MORE32:
        mov         eax,edx
        xor         edx,edx
        and         cl,1Fh
        shr         eax,cl
        ret
RETZERO:
        xor         eax,eax
        xor         edx,edx
        ret
    }
}
#endif // _MSC_VER
#endif // __M_X86_32

#endif // _WIN32
