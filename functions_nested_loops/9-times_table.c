#include "main.h"

/**
 *times_table- la maldita tabla en la cual llevo 3 horas
 *
 *Return: una tabla de multiplicar
 */


void times_table(void)
{
int num, reps, asci;


	for (reps = 0; reps < 10; reps++)
	{

		for (num = 0; num < 10; num++)
		{
			asci = num * reps;

			if (num * reps >= 10)
			{
				_putchar('0' + (asci / 10));
				_putchar('0' + (asci % 10));
				if (num == 9)
				{ break;
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if (num != 0)
				{
				_putchar(' ');
				}
				_putchar('0' + (num * reps));
			if (num == 9)
			{ break;
			}
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}


}
