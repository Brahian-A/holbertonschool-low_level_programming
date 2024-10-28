#include "main.h"

/**
 *print_diagonal- imprime una linea
 *@n: variable con la que prueba
 *Return: una linea en diagonal
 *
 */


void print_diagonal(int n)
{
int i, a;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
	{
		for (a = 0; a < i; a++)
		{
		_putchar(' ');
		}
	_putchar ('\\');
	_putchar ('\n');
	}
	}
}
