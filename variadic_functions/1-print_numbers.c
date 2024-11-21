#include "variadic_functions.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 *
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argu;
	unsigned int i;
	int num;
	
	va_start(argu, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(argu, int);
	}
	if (separator != NULL)	
	{
		printf("%d", num);
       		printf("%s", separator);
        }
	else 
	{
		printf("%d", num);
	}

    va_end(argu);
    printf("\n");
}
