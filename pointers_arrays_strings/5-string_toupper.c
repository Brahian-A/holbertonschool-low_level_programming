#include "main.h"

/**
 *string_toupper- funcion que cambia minusculas a mayusculas
 *@string: el string a cambiar
 *Return: 'a' - 'A' = a,b,c = A,B,C
 *
 *
 *
 *
 */

char *string_toupper(char *string)
{
char *original = string;

	while (*string)
	{
		if (*string >= 'a' && *string <= 'z')
		{	*string = *string - ('a' - 'A');

		}

		string++;
	}
	return (original);
}
