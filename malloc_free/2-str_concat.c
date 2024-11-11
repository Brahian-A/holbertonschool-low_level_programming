#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *str_concat- funcion que concatena 2 strings
 *@s1:string 1
 *@s2:string 2
 *Return: s3 con s1 y despues s2
 */


char *str_concat(char *s1, char *s2)
{
char *s3 = malloc(strlen(s1) + strlen(s2) + 1);

	if (s3 == NULL)
	{
		return (NULL);
	}

		strcpy(s3, s1);
		strcat(s3, s2);
		return (s3);
}
