#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_longitud- funcion que busca el tamao de la string
 *@s: string a verificar el tamao
 *Return: el largo de la string
 */

size_t _longitud(const char *s)
{
        size_t longi = 0;

        while (s[longi] != '\0')
        {
                longi++;
        }
        return (longi);
}


/**
 *str_concat- funcion que concatena 2 strings
 *@s1:string 1
 *@s2:string 2
 *Return: s3 con s1 y s2 n cantidad de veces
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	size_t i = 0, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
        }

		if (n < (_longitud(s2)))
		{
		s3 = malloc(_longitud(s1) + n + 1);
		}
		else
		{
			s3 = malloc(_longitud(s1) + _longitud(s2) + 1);
		}
	if (s3 == NULL)
	{
		return (NULL);
	}

		while (*s1)
		{
			s3[i++] = *s1++;
		}

		if (n < (_longitud(s2)))
		{
			for (j = 0; j <= n; j++)
			{
				s3[i++] = *s2++;
			}
				
		}

		else
		{
			while (*s2)
			{
			s3[i++] = *s2++;
			}
		}
		s3[i] = '\0';

	return (s3);
}
