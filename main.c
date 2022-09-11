#include  <stdio.h>

#include <mips.h>

// mips decode
int main(void) {



	//mips_t i = {.v = 0x3c03800b };
	//mips_t i = {.v = 0x3c048001 };
	//mips_t i = {.v = 0x24841670 };
	/*
	   printf("opcode=%d %d %d %d\n",
	   i.fmt_imm.codop,
	   i.fmt_imm.rs,
	   i.fmt_imm.rt,
	   i.fmt_imm.addr
	   );*/


	mips_t i = {
		.fmt_reg.codop   = 0,
		.fmt_reg.rs      = 8,
		.fmt_reg.rt      = 9,
		.fmt_reg.rd      = 10,
		.fmt_reg.shamt   = 0,
		.fmt_reg.funz    = 34,
	};

	printf("%#.8X\n", i.v);
	return 0;
}

