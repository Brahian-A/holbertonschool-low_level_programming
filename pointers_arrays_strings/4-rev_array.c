#include "main.h"

/**
 *reverse_array- la funcion
 *@a: inicio del bucle
 *@n:final
 *
 *
 */

void reverse_array(int *a, int n)
{
int *inicio = a;
int *final = a + n - 1;


	while (inicio < final)
	{
		n = *inicio;
		*inicio = *final;
		*final = n;
		inicio++;
		final--;
	}

}
