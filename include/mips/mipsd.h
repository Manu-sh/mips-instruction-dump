#pragma once

#include <mips/mips.h>

typedef enum {
    DUMPOPT_B16   = 1,
    DUMPOPT_B10   = 1 << 1,

    // come istruzione di tipo register
    DUMPOPT_HUMAN_TYPE_R = 1 << 2,

    // come istruzione di tipo immediato
    DUMPOPT_HUMAN_TYPE_I = 1 << 3,

    // come istruzione di tipo salto

} dump_option_t;




static inline void mips_dump(mips_t i, dump_option_t opt) {

    if (opt & DUMPOPT_B16)
        printf("%#.8X ", i.word);

    if (opt & DUMPOPT_B10)
        printf("%.4u ", i.word);


    puts("");
}

