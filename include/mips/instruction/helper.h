#pragma once
#include <stdint.h>


typedef enum {
    ISA_ERROR,
    ISA_TYPE_R,      // instruction type register
    ISA_TYPE_I,      // instruction type immediate
    ISA_TYPE_J,      // instruction type jump
    ISA_TYPE_COPROC, // instruction for co-processor
    ISA_TYPE_LENGTH
} mips_instruction_type_t;


// https://eclass.teicrete.gr/modules/document/file.php/TP286/%CE%92%CE%BF%CE%B7%CE%B8%CE%B7%CF%84%CE%B9%CE%BA%CE%AC%20%CE%B5%CE%B3%CF%87%CE%B5%CE%B9%CF%81%CE%AF%CE%B4%CE%B9%CE%B1/MIPS_Instruction_Coding_With_Hex.pdf
// ruby print binary opcode: "%#08b" % opcode
/*
    All R-type instructions use opcode 000000.
    All opcodes except 000000, 00001x, and 0100xx are used for I-type instructions.
    J-type instructions use opcodes 00001x.
    All coprocessor instructions use opcodes 0100xx.
*/

static inline mips_instruction_type_t get_instruction_type(uint8_t opcode) {

    // opcode size is 6 bit
    if (opcode > 63)
        return ISA_ERROR;

    if (opcode == 0b000000)
        return ISA_TYPE_R;

    // (0..63).map {|op| p (((op>>1) ^ 0b00001)) }
    if (opcode == 0b00001)
        return ISA_TYPE_J;

    if (opcode == 0b010001)
        return ISA_TYPE_COPROC;

    return ISA_TYPE_I;
}


static inline const char * get_instruction_type_str(mips_t i) {

    static const char *name[ISA_TYPE_LENGTH] = {
      [ISA_ERROR] = "invalid opcode",
      [ISA_TYPE_R] = "register",
      [ISA_TYPE_I] = "immediate",
      [ISA_TYPE_J] = "jump",
      [ISA_TYPE_COPROC] = "coprocessor",
    };

    return name[ get_instruction_type(i.word >> (3*8+2)) ];
}