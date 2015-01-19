#include "f**kc.h"
// AWW YEAH. BEAT DAT C NOOBZ
proc(main, s0)
	u8 y;
	mov(r2, PTR(y));
	call(lol);
	retn(0);
endproc
proc(lol, void)
	mov(r1, 'A');
	cmp(r1, 'A');
	je(do_shit);
	mov(r1, 'C');
do_shit:
	syscall(0);
	retn(0);
endproc
