#include "main.h"

/**
 *_strchr- la funcion que buca caracteres
 *@s: string de caracteres donde buscar c
 *@c: variable con los caracters a encontrar
 *Return: los caracteres que tiene c encontrados en el string *s
 */


char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
				s++;

	}
	return (NULL);

}
