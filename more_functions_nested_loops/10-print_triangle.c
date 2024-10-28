#include "main.h"

/**
 *print_triangle- el maldito triangulo
 *@size: asda
 *Return: una piramide
 */


void print_triangle(int size)
{
	int a, e;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (e = 1; e <= size; e++)
			{
			if (e <= size - a)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
