#ifndef GLOBALS_H
#define GLOBALS_H
#include "structs.h"
#include <stdio.h>

FILE *fs, *fd;
symb_t symbole;
idef_t *id_array;
int id_size;
int id_head;
int etat ;
int dcl_flag;
int new_id_flag;
int deb = 0;
int l_sz;
int etiq_ctr;
int f_line;
int f_column;
int eof_flag;

#endif // GLOBALS_H
