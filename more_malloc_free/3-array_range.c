#include "main.h"
#include <stdlib.h>

/**
 *array_range- funcion que asigan espacion en la memoria a un array
 *@min: rango minimo
 *@max:rango maximo
 *Return: pepe
 */


int *array_range(int min, int max)
{
	int size, i;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
			size = max - min + 1;
		array = (int *)malloc(size * sizeof(int));
			if (array == NULL)
			{
				return (NULL);
			}

		for (i = 0; i < size; i++)
		{
			array[i] = min + i;
		}

	return (array);

}
