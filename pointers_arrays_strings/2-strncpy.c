#include "main.h"

/**
 *_strncpy- funcion que copia strings
 *@dest: cadena de destino
 *@src: cadena qeu vamos a copiar a dest
 *@n: variable con la cantidad maxima de caracteres que vamos a copiar
 *Return: dest con src copiado adentro
 *
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
char *copia = dest;

	while (n > 0 && *src != '\0')
	{	*dest = *src;
		dest++;
		src++;
		n--;
	}

		while (n > 0)
		{
			*dest = '\0';
			dest++;
			n--;
		}
return (copia);

}
