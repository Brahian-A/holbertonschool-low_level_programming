#include <stdio.h>

/**
 *print_diagsums- funcion que suma matrices en digonal
 *@a:puntero con las pociciones
 *@size: puntero con el tama√o
 *
 */



void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int *puntero1 = a;
	int *puntero2 = a + (size - 1);
	int i = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *puntero1;
		puntero1 += size + 1;
	}



	for (i = 0; i < size; i++)
	{
		sum2 += *puntero2;
		puntero2 += size - 1;
	}

	printf("%d, %d\n", sum1, sum2);
}
