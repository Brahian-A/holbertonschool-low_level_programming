#include "function_pointers.h"

/**
 *array_iterator- funcion que ejecuta action sobre todos los elementos de array
 *@array:array de enteros
 *@size: tamanio del array
 *@action: puntero a la funcion
 *Return:void
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}

}
