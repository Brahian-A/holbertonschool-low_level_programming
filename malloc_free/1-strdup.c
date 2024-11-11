#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_longitud- funcion que busca el tama√o de la string
 *@str: string a verificar el tama√o
 *Return: el largo de la string
 */

size_t _longitud(const char *str)
{
	size_t longi = 0;

	while (str[longi] != '\0')
	{
		longi++;
	}
		return (longi);
}

/**
 *_strdup- funcion que duplica la string
 *@str: string a duplicar
 *Return: la string duplicada
 */

char *_strdup(char *str)
{
char *dupstr = malloc((longi) +1);
char *inicio = dupstr;

	if (str == NULL)
	{
		return (NULL);
	}

	if (dupstr == NULL)
	{
		return (NULL);
	}
		while (*str)
		{
			*dupstr = *str;
			dupstr++;
			str++;
		}
		*dupstr = '\0';
		return (inicio);
}
