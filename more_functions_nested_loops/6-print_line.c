#include "main.h"

/**
 *print_line- imprime una linea
 *@n: variable con la que prueba
 *Return: una linea
 *
 */


void print_line(int n)
{
int i;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else 
	{	for (i = 0; i < n; i++)
		{
			_putchar ('_');
	}	}
	_putchar ('\n');
}
