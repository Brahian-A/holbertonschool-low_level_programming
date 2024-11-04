#include "main.h"

/**
 **leet- funcion de codifica el contenido de la string
 *@string: la string la cual codificar
 *Return: string ya codificada
 */

char *leet(char *string)
{
	char *original = string;
	char letras[] = "aAeEoOtTlL";
	char codex[] = "4433007711";
	int i = 0;


	while (*string != '\0')
	{
		for (i = 0; letras[i]; i++)
		{
			if (*string == letras[i])
			{
				*string = codex[i];
				break;
			}
		}

	string++;
	}
return (original);
}

