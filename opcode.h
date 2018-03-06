#ifndef OPCODE_H
#define OPCODE_H

#define LDA 0x9002
#define LDAI 0x1002
#define ANA 0x9005
#define ANAI 0x1005
#define ORA 0x9006
#define ORAI 0x1006
#define XRA 0x9007
#define XRAI 0x1007
#define ADA 0x9008
#define ADAI 0x1008
#define SUA 0x9009
#define SUAI 0x1009
#define MUA 0x900a
#define MUAI 0x100a
#define SRA 0x900b
#define SRAI 0x100b
#define SLA 0x900c
#define SLAI 0x100c
#define SRL 0x900d
#define SRLI 0x100d
#define SLL 0x900e
#define SLLI 0x100e
#define HLT 0xf000

#define JMP 0xa002
#define JMPI 0x2002
#define JZ 0xa102
#define JZI 0x2102
#define CALL 0xa012
#define CALLI 0x2012
#define STA 0xb000
#define STAI 0x3000
#define RET 0x4000

#endif



