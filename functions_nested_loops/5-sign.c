#include "main.h"

/**
 * print_sign - Muestra el signo de un númer
 * @n: variable de signos
 *
 * Return: 1 si es positivo, 0 si es cero, -1 si es negativo
 */



int print_sign(int n)
{
	if (n > 0)
	{

	_putchar('+');
	return (1);

	}
	else if (n == 0)
	{

	_putchar('0');
	return (0);
	}

	else
	{

	_putchar('-');
	return (-1);
	}
}
