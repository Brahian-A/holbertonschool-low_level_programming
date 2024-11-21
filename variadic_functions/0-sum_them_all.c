#include "variadic_functions.h"

/**
 *
 *
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	int total;
	unsigned i;

	if (n == 0)
	{
	return (NULL);	
	}

	va_list argu;

	va_start (argus, n);

	for (i = 0; i < n; i++)
	{
		total += va_arg(argus, int);
	}

	va_end
	return(total);
}
