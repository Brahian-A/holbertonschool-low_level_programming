#include "main.h"

/**
 *print_square- imprime un cuadrado
 *@size: variable del ancho del cuadrado
 *Return: un cuadrado
 *
 */

void print_square(int size)
{
	int x, a;


	if (size <= 0)
	{
	_putchar('\n');
	}

	for (a = 1; a <= size; a++)
	{
		for (x = 1; x <= size; x++)
		{
		_putchar ('#');
		}
		_putchar ('\n');
	}
}
