#include "main.h"

/**
 *print_numbers- funcion que imprime del 0 al 9
 *Return: del 0 al 9
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
	_putchar (a + '0');
	}

	_putchar ('\n');

}
