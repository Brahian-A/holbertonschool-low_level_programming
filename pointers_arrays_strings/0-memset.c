#include "main.h"

/**
 *_memset- la funcion
 *@s:acceder y modificar el contenido de la memoria
 *@b:Este es elbyte constante que se usará para llenar la memoria
 *@n:indica cuántos bytes de memoria deben llenarse.
 *Return: 0
 */


char *_memset(char *s, char b, unsigned int n)
{
	char *p = s; /* guarda el puntero inicial */

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
