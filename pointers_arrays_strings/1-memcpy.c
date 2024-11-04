#include "main.h"

/**
 *_memcpy- la funcnion qeu copia
 *@dest: puntero de destino
 *@src: puntero fuente
 *@n: cantidad de veces que se repite
 *Return: dest con la copia de src
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p = src;

	while (n > 0)
	{
		*p++ = *src++;
		n--;

	}
	return (dest);
}

