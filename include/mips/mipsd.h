#pragma once

#include <mips/mips.h>

#include <mips/instruction/helper.h>

typedef enum {
    DUMPOPT_B16   = 1,
    DUMPOPT_B10   = 1 << 1,
} dump_option_t;

static inline void mips_dump(mips_t i, dump_option_t opt) {

    if (opt & DUMPOPT_B16)
        printf("%#.8X ", i.word);

    if (opt & DUMPOPT_B10)
        printf("%.4u ", i.word);


    /*
     TODO: cominciare a parsare le istruzioni di tipo R con 3 operandi
    uint8_t opcode = i.word >> (3*8+2);
    switch (  get_instruction_type(opcode)  ) {
        case ISA_TYPE_R: {
            if (i.fmt_reg.codop != 0)
                break;

            i.fmt_reg.funz
            printf("%hu, %s, %s, %s");
        }
    }
    */

    puts("");
}

