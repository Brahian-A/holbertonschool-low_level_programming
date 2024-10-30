# include "main.h"
/**
 *_puts- la funcion
 *@str: el puntero
 *
 *
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
