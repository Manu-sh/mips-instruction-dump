#include <stdio.h>
#include <mips/mipsd.h>

#include <mips/register/helper.h>
#include <mips/instruction/helper.h>

// mips decode
int main(void) {



	//mips_t i = {.word = 0x3c03800b };
	//mips_t i = {.word = 0x3c048001 };
	//mips_t i = {.word = 0x24841670 };
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

	mips_dump(i, DUMPOPT_B16|DUMPOPT_B10);

    //mips_dump((mips_t){.word = 0x44090800}, DUMPOPT_B16|DUMPOPT_B10);

    //printf("%#08x\n", (mips_t){.word = 0x44090800}.fmt_reg.codop);
    //printf("%#08x\n", (mips_t){.word = 0x44090800}.word >> (3*8+2));

    printf("%s\n", get_isa_type_str( (mips_t){.word = 0x46030801}) );


    printf("%s\n", get_isa_type_str( (mips_t){.word = 0x3c03800b}) );
    printf("%s\n", get_isa_type_str( (mips_t){.word = 0x3c048001}) );
    printf("%s\n", get_isa_type_str( (mips_t){.word = 0x24841670}) );
    printf("%s\n", get_isa_type_str( (mips_t){.word = 0x00e01021 }) );











    printf("%s\n", get_isa_type_str( (mips_t){.word = 0x44090800 }) );
    printf("%s\n", get_isa_type_str( (mips_t){.word = 0x46800820 }) );
    printf("%s\n", get_isa_type_str( (mips_t){.word = 0x46000824 }) );
    printf("%s\n", get_isa_type_str( (mips_t){.word = 0x46030803 }) );
    printf("%s\n", get_isa_type_str( (mips_t){.word = 0x44090800 }) );
    printf("%s\n", get_isa_type_str( (mips_t){.word = 0x46000806 }) );
    printf("%s\n", get_isa_type_str( (mips_t){.word = 0x44890800 }) );

    printf("%s\n", get_isa_type_str( (mips_t){.word = 0x46030802 }) );
    printf("%s\n", get_isa_type_str( (mips_t){.word = 0x46030801 }) );

	//for (int i = 0; i < 32; ++i)
	    //printf("%s ", get_reg_name(i));

	return 0;
}

