#include "main.h"
/**
 *_strspn- funcion que compara los contenidos de los punteros
 *@s:puntero con el contenido
 *@accept:puntero con el verificador
 *Return: numero de caracteres verificados
 *
 */

unsigned int _strspn(char *s, char *accept)
{
char *a = accept;

	if (*s == '\0')
	{
		return (0);
	}



	while (*a)
	{
		if (*s == *a)
		{
			return (1 + _strspn(s + 1, accept));
		}
		a++;
	}
return (0);
}
