#include "main.h"

/**
 *_strpbrk- funcion
 *@accept: puntero
 *@s:funcion
 *Return:ni idea
 */



char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
