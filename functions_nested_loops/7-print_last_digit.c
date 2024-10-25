#include "main.h"

/**
 *print_last_digit- imprime el ultimo numero
 *@r: el numero a verificar
 *Return: el ultimo digito
 */



int print_last_digit(int r)
{
	int n;

	n = r % 10;

	if (n < 0)
		n = -n;


	_putchar (n + '0');
	return (n);

}
