#include "main.h"

/**
 * print_alphabet_x10- Lo voy entendiendo mejor lo mismo que el anterior por 10
 *Return: void
 */





void print_alphabet_x10(void)
{
	char az;
	int d;

	for (d = 0; d <= 9; d++)
	{
		for (az = 'a'; az <= 'z'; az++)
			_putchar(az);
		_putchar('\n');
	}
}
