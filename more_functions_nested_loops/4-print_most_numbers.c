#include "main.h"

/**
 *print_most_numbers- funcion imprime del 0 al 9 salteando el 2 y el 4
 *
 *Return: 01356789
 */


void print_most_numbers(void)
{
int a;

	for (a = 0; a <= 9; a++)
	{
	if (a != 2 && a != 4)
	_putchar (a + '0');
	}
	_putchar ('\n');


}
