#include "main.h"

/**
 *puts2- la funcion
 *@str: el string
 *Return: una cadena
 *
 */

void puts2(char *str)
{
int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{

		_putchar (str[i]);
		}
	i++;
	}
	_putchar ('\n');

}
