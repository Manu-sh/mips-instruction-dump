#pragma once

#include <stdint.h>
#include <asm/byteorder.h>

// 1006862347 => 3c03800b => LUI, 2, 5, 0
typedef union {

    #ifdef __LITTLE_ENDIAN_BITFIELD

            struct {
                uint32_t    funz:6;
                uint32_t   shamt:5;
                uint32_t      rd:5;
                uint32_t      rt:5;
                uint32_t      rs:5;
                uint32_t   codop:6;
            } fmt_reg;

            struct {
                uint32_t    addr:16;
                uint32_t      rt:5;
                uint32_t      rs:5;
                uint32_t   codop:6;
            } fmt_imm;

    #elif defined __BIG_ENDIAN_BITFIELD

            struct {
                uint32_t   codop:6; // opcode
                uint32_t      rs:5; // a1
                uint32_t      rt:5; // a2
                uint32_t      rd:5; // dst reg
                uint32_t   shamt:5; // shift amount
                uint32_t    funz:6; // funz
            } fmt_reg;

            struct {
                uint32_t   codop:6;
                uint32_t      rs:5;
                uint32_t      rt:5;
                uint32_t   addr:16; // address or constant
            } fmt_imm;

    #else
        #error "unknow host endianess"
    #endif

    uint32_t word;

} mips_t;
