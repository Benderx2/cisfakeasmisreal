#ifndef FUCKC_USE_ASM_ITS_REAL_C_IS_FAKE_BUT_STILL_USE_C_BECAUSE_I_CANT_FIND_A_FUCKING_PORTABLE_ASSEMBLER_H
#define FUCKC_USE_ASM_ITS_REAL_C_IS_FAKE_BUT_STILL_USE_C_BECAUSE_I_CANT_FIND_A_FUCKING_PORTABLE_ASSEMBLER_H
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef int64_t s64;
typedef int s0;
typedef unsigned int u0;
typedef void empty;
empty asm_main(empty);
empty (*_______________________func)(empty);
#define mov(x, y) (x=y)
#define push(x)\
        stack[sp] = x;\
        sp--;
#define pop(x)\
        x = stack[sp+1];\
        sp++;
#define jmp(x)\
			goto x;
#define je(x)\
        if(sete == true) {\
                goto x;\
        }
#define jl(x)\
        if(setl == true) {\
                goto x;\
        }
#define jg(x)\
        if(setg == true) {\
                goto x;\
        }
#define jz(x)\
        if(setz == true) {\
                goto x;\
        }
#define cmp(x, y)\
                if(x==y) {\
                        sete = true;\
                }\
                if(x > y)\
                {\
                        setg = true;\
                }\
                if(x < y)\
                {\
                        setl = true;\
                }\
                if(y == 0)\
                {\
                        setz = true;\
                }
#define cmps(x, y)\
                if((signed int)x==(signed int)y) {\
                        sete = true;\
                }\
                if((signed int)x > (signed int)y)\
                {\
                        setg = true;\
                }\
                if((signed int)x < (signed int)y)\
                {\
                        setl = true;\
                }\
                if(y == 0)\
                {\
                        setz = true;\
                }
#define lodsb (r1 = *((uint8_t*)(r0)))
#define lodsw (r1 = *(uint16_t*)(r0))
#define lodsd (r1 = *(uint32_t*)(r0))
#define lodsq (r1 = *(uint64_t*)(r0))
#define stosb (*(uint8_t*)(r0) = r1)
#define stosw (*(uint16_t*)(r0) = r1)
#define stosd (*(uint32_t*)(r0) = r1)
#define stosq (*(uint64_t*)(r0) = r1)
#define inc(x) (x++)
#define dec(x) (x--)
#define PTR(x) (uintptr_t)x
#define call(x)\
		_______________________func = &x;\
		_______________________func();
#define ret return
#define add(x, y) (x = x+y)
#define sub(x, y) (x = x-y)
#define div(x, y)\
			x = x / y;\
			r1 = x % y;
#define mul(x, y) (x = x*y)
#define xor(x, y) (x = x^y)
#define or(x, y) (x = x|y)
#define and(x, y) (x = x & y)
#define not(x) (x=!x)
#define neg(x) (x=~x)
#define proc(x) empty x (empty); empty x(empty){
#define endproc }
bool sete, setl, setg, setz;
uint64_t r0, r1, r2, r3, r4, r5, r6, r7, r8, r8, r10, r11, r12, r13, r14, r15;
uint64_t sp;
//! Sorry m8's, really real programmers need only 1500 64-bit stack space!
uint64_t stack[1500];
void syscall(int x);
void syscall(int x){
	switch(x){
		case 0:
			putc(r1, stdout);
			break;
		case 1:
			r1 = getc(stdin);
		default:
			break;
	}
}
int main(void){
	sp = 1500;
	asm_main();
	return 0;
}
#endif
