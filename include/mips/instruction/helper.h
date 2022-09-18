#pragma once
#include <stdint.h>
#include <mips/mips.h>

enum {
    ISA_ERROR,
    ISA_TYPE_R,      // instruction type register
    ISA_TYPE_I,      // instruction type immediate
    ISA_TYPE_J,      // instruction type jump
    ISA_TYPE_COPROC, // instruction for co-processor
    ISA_TYPE_LENGTH
};

typedef uint8_t mips_instruction_type_t;

mips_instruction_type_t get_instruction_type(uint8_t opcode);
const char * get_instruction_type_str(mips_t i);

// TODO: get_isa_from_opcode_r()