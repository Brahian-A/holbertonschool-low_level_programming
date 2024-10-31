#include "main.h"

/**
 *print_rev- la funcion
 *@s:el string
 *
 *
 *
 */


void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	while (a >= 0)
{
	_putchar(s[a]);
	a--;
}

	_putchar('\n');

}
