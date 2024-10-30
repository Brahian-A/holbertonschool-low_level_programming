# include "main.h"
# include <stdio.h>
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
		putchar(str[a]);
		a++;
	}
	printf("\n");
}
