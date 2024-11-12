#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked- funcion que gurada espacios en la memoria
 *@b:variable con los espacios
 *Return: pepe
 */



void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
		if (ptr == NULL)
		{
			exit(98);
		}
return (ptr);
}
