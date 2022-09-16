#include <mips/register/helper.h>

const char * get_reg_name(uint8_t reg_number) {

    static const char * const register_name[REG_LENGTH] = {
            [REG_ZERO] = "$zero",
            [REG_AT]   = "$at",

            [REG_V0]   = "$v0",
            [REG_V1]   = "$v1",

            [REG_A0]   = "$a0",
            [REG_A1]   = "$a1",
            [REG_A2]   = "$a2",
            [REG_A3]   = "$a3",

            [REG_T0]   = "$t0",
            [REG_T1]   = "$t1",
            [REG_T2]   = "$t2",
            [REG_T3]   = "$t3",
            [REG_T4]   = "$t4",
            [REG_T5]   = "$t5",
            [REG_T6]   = "$t6",
            [REG_T7]   = "$t7",

            [REG_S0]   = "$s0",
            [REG_S1]   = "$s1",
            [REG_S2]   = "$s2",
            [REG_S3]   = "$s3",
            [REG_S4]   = "$s4",
            [REG_S5]   = "$s5",
            [REG_S6]   = "$s6",
            [REG_S7]   = "$s7",

            [REG_T8]   = "$t8",
            [REG_T9]   = "$t9",

            [REG_K0]   = "$k0",
            [REG_K1]   = "$k1",

            [REG_GP]   = "$gp",
            [REG_SP]   = "$sp",
            [REG_FP]   = "$fp",
            [REG_RA]   = "$ra",

            [REG_INVALID] = "invalid",
    };

    if (reg_number >= REG_LENGTH)
        return register_name[REG_INVALID];

    return register_name[reg_number];
}
