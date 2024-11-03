#include "main.h"

/**
 *_strncat- la funcion
 *@dest:el puntero donde termina
 *@src: "    "       '    empieza
 *Return: el puntero + la string
 *@n:una variable
 */

char *_strncat(char *dest, char *src, int n)
{
char *a = dest;

	while (*dest != '\0')
	{	dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
		}
	*dest = '\0';
	return (a);

}
