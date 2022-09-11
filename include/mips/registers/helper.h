#pragma once
#include <stdint.h>

static inline const char * get_reg_name(uint8_t reg_number) {

    static const char * const register_name[32] = {
            "$zero",
            "$at",

            "$v0",
            "$v1",

            "$a0",
            "$a1",
            "$a2",
            "$a3",

            "$t0",
            "$t1",
            "$t2",
            "$t3",
            "$t4",
            "$t5",
            "$t6",
            "$t7",

            "$s0",
            "$s1",
            "$s2",
            "$s3",
            "$s4",
            "$s5",
            "$s6",
            "$s7",

            "$t8",
            "$t9",

            "$k0",
            "$k1",

            "$gp",
            "$sp",
            "$fp",
            "$ra",
    };

    if (reg_number > 31)
        return "invalid register number (valids are 0-31)";

    return register_name[reg_number];
}
