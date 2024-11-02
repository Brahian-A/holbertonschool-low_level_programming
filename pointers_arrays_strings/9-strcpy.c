#include "main.h"

/**
 *_strcpy- funcio para copiar el string
 *@src:el otro puntero
 *@dest:puntero que guarda el destino
 *Return: pepe
 */

char *_strcpy(char *dest, char *src)
{
char *original = dest;
int i = 0;
	while (src[i] != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
		*dest = '\0';
		return (original);
}
