#include "main.h"
#include <stdlib.h>

/**
 *_calloc- funcion que asigna memoria
 *@nmemb: número de elementos que quero almacenar
 *@size: tamaño de cada elemento
 *Return:pepe
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	int size_total, i;
	void *ptr;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	size_total = nmemb * size;

	ptr = malloc(size_total);

		if (ptr == NULL)
		{
			return (NULL);
		}
	for (i = 0; i < size_total; i++)
	{
		*((char *)ptr + i) = 0;
	}
	return (ptr);
}
