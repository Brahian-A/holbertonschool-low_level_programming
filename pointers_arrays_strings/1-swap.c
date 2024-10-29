#include "main.h"

/**
 *swap_int- swap de punteros
 *@a: puntero a
 *@b:puntero b
 *Return: a es b, b es a 
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;

*a = *b;
*b = c;

}
