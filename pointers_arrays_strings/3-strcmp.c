#include "main.h"

/**
 *_strcmp- funcion que compara strings
 *@s1: primer string a comparar
 *@s2: segundo string a comparar
 *Return: la cantidad de diferencias que tienen los 2 strings
 *
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
	s1++;
	s2++;
	}
		return (*s1 - *s2);
}
