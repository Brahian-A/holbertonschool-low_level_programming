#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
void print_name(char *name, void (*f)(char *));
#endif
