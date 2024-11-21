#include "variadic_functions.h"

/**
 *sum_them_all- funcion que suma parametros
 *@n: variable con los valores a sumar
 *Return: una suma
 */

int sum_them_all(const unsigned int n, ...)
{
	int total;
	unsigned int i;
	va_list argus;

	if (n == 0)
	{
	return (0);
	}

	va_start(argus, n);

	for (i = 0; i < n; i++)
	{
		total += va_arg(argus, int);
	}

	va_end(argus);
	return (total);
}
