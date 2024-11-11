#include "main.h"
#include <stdlib.h>

/**
 *create_array- funcion que asigna memoria dinamica
 *@size: tama√o del arrey
 *@c: contenido del array
 *Return: el arrey
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}

		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}

		return (array);
}
