#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
/**
 *print_numbers- funcion
 *@separator: separador entre n
 *@n: digitos
 *Return: n + separador
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argu;
	unsigned int i;
	int num;
	unsigned int f = n;

	va_start(argu, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(argu, int);

		if (separator != NULL)
		{
		printf("%d", num);
		if (i == f - 1)
		{
			break;
		}
		printf("%s", separator);
		}
		else
		{
		printf("%d", num);
		}
	}
	va_end(argu);
	printf("\n");
}
