/* VBCC Backend for Motorola 6809 and Hitachi 6309 in compatibilty mode.
 * Written by Gregory Norton July 25, 2018
 */
 
#include "dt.h"

/*struct AddressingMode {
    
}*/

struct AddressingMode {
    int never_used;
}

#define MAXR 4
#define MAXGF 1
#define USEQ2ASZ 1
#define MINADDI2P unsigned char
#define MAXADDI2P unsigned short
#define BIGENDIAN 1
#define LITTLEENDIAN 0
#define SWITCHSUBS 1
#define INLINEMEMCPY 1024
#define ORDERED_PUSH 0
#define HAVE_TARGET_PEEPHOLE 0

/*#define JUMP_TABLE_DENSITY */
/*#define JUMP_TABLE_LENGTH */

/* C99 Variable arrays */
/*#define ALLOCVLA_REG
#define ALLOCVLA_INLINEASM
#define FREEVLA_REG
#define FREEVLA_INLINEASM
#define OLDSPVLA_INLINEASM
#define FPVLA_INLINEASM*/

