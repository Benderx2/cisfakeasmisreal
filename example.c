#include "f**kc.h"
proc(lol)
	mov(r1, 'A');
	cmp(r1, 'A');
	je(do_shit);
	mov(r1, 'C');
do_shit:
	syscall(0);
	ret;
endproc
// AWW YEAH. BEAT DAT C NOOBZ
proc(asm_main)
	u8 y;
	mov(r2, PTR(y));
	call(lol);
	retn(0);
endproc
