#include <stdio.h>
#include "main.h"

/**
 *print_to_98- despues de pensar 3 horas con el 9 este no puede ser tan facil
 *@n: los numeros
 *Return: n + a
 */

void print_to_98(int n)
{
int i;
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
				if (i < 98)
				{
					printf(", ");
				}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
				if (i > 98)
				{
					printf(", ");
				}
		}
	}
	printf("\n");
}
