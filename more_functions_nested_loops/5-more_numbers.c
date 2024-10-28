#include "main.h"

/**
 *more_numbers- del 0 al 14
 *Return: del 0 al 14
 *
 */

void more_numbers(void)
{
int f, c;

	for (f = 0; f <= 9; f++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			{
				_putchar (c / 10 + '0');
			}
				_putchar (c % 10 + '0');
		}
		_putchar ('\n');
	}
}
