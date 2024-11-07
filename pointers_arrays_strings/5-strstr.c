#include "main.h"

/**
 *_strstr- la funcion
 *
 *@haystack:el punteo
 *@needle: el otro puntero
 *Return:0 en realidad no retorna 0 pero ya no queiro hacer comentraios
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
	{
	return (haystack);
	}

	while (*haystack)
	{
	h = haystack;
	n = needle;

	while (*h && *n && (*h == *n))
	{
		h++;
		n++;
	}


	if (*n == '\0')
	{
		return (haystack);
	}

	haystack++;
	}

	return (NULL);
}
