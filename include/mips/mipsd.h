#pragma once

#include <mips/mips.h>

typedef enum {
    DUMPOPT_B16 = 1,
    DUMPOPT_B10 = 1 << 1,
} dump_option_t;

static inline void mips_dump(mips_t i, dump_option_t opt) {

    if (opt & DUMPOPT_B16)
        printf("%#.8X ", i.word);

    if (opt & DUMPOPT_B10)
        printf("%.4u ", i.word);

    puts("");
}