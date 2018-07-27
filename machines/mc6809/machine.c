#include "supp.h"

char *cg_copyright = "Copyright Gregory Norton 2018";

zmax char_bit;
zmax align[MAX_TYPE + 1];
zmax maxalign;
zmax sizetab[MAX_TYPE + 1];
zmax t_min[MAX_TYPE + 1];
zumax t_max[MAX_TYPE + 1];
zumax tu_max[MAX_TYPE + 1];

char *reg_names[MAXR + 1] = { "A", "B", "X", "Y" };
zmax regsize[MAXR + 1];/* = { 1, 1, 2, 2 };*/

