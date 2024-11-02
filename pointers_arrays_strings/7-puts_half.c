#include "main.h"

/**
 *puts_half- la funcion
 *@str: el string
 *
 *Return: la mitad de la cadena
 *
 */

void puts_half(char *str)
{
int inicio = 0;
int largo = 0;
int i;

	while (str[largo] != '\0')
	{
		largo++;
	}
		if (largo % 2 == 0)
		{
			inicio = largo / 2;
		}
		else
		{
			inicio = (largo - 1) / 2 + 1;
		}
			for (i = inicio; i < largo; i++)
			{
				_putchar(str[i]);
			}
	_putchar('\n');
}
