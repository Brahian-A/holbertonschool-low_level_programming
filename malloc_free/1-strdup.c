#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_strdup- funcion que duplica la string
 *@str: string a duplicar
 *Return: la string duplicada
 */

char *_strdup(char *str)
{
char *dupstr = malloc(strlen(str) + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	if (dupstr == NULL)
	{
		return (NULL);
	}
		strcpy(dupstr, str);
		return (dupstr);
}
