#include "main.h"

/**
 *
 *
 *
 *
 */

void puts2(char *str)
{
int i;

	while (str[i] != '\0')
{
		_putchar (str[i]);
		i += 2;
}
_putchar ('\n');

}
