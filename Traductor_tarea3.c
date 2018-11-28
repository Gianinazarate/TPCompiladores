#include "parser.c"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define CANT_COMP_LEX 10
FILE *archivo_salida;
void json_trad();
void element_trad();
void array_trad();
void arrayB_trad();
void element_list_trad();
void element_listB_trad();
void object_trad();
void objectB_trad();
void attribute_trad();
void attributes_list_trad();
void attributes_listB_trad();
void attribute_name_trad();
void attribute_value_trad();
void match(int);
void string_sin_comillas(char* cadena);
int tabulacion=0;
void print_tab();