#include "function_pointers.h"
/**
 *int_index- funcion que busca enteros
 *@array:array con los valores a buscar
 *@cmp:puntero a la funcion
 *@size: tamanio del array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL && cmp == NULL && size <= 0)
	{
		return (-1);
	}
	
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	return (-1);

	}
}
