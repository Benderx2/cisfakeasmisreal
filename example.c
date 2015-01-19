#include "f**kc.h"
u8* y = "Hello, World!\n";
proc(myputs)
	_loop:
		lodsb;
		cmp(r1, 0);
		je(_end_loop);
		syscall(0);
		inc(r0);
		jmp(_loop);
	_end_loop:
		ret;
endproc
// AWW YEAH. BEAT DAT C NOOBZ
proc(asm_main)
	mov(r0, PTR(y));
	call(myputs);
	retn(0);
endproc
