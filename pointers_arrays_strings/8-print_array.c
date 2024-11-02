#include <stdio.h>

/**
 *print_array- el array
 *@a: una variable 
 *@n: la otra variable
 *Return: pepe
 *
 */

void print_array(int *a, int n)
{
int i;
	for (i = 0; i < n; i++)
	{	printf("%d", a[i]);
	
		if (i < n -1)
		{	printf(", ");
		}
	}
	putchar('\n');
}
