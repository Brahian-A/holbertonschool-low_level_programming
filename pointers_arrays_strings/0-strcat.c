#include "main.h"

/**
 *_strcat- la funcion
 *@dest: puntero del final
 *@src: el otro puntero
 *Return: 0
 */

char *_strcat(char *dest, char *src)
{
char *a = dest;

	while (*dest != '\0')
	{	dest++;
	}

	while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
	*dest = '\0';
	return (a);

}
