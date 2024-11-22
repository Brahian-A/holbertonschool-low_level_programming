#include "variadic_functions.h"

/**
 *print_strings- funcion que printea strings
 *@separator: separador entre strings
 *@n: cantidad de strings
 *Return: string separador string
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argu;
	unsigned int i;
	char *num;
	unsigned int f = n;

	va_start(argu, n);

		for (i = 0; i < n; i++)
		{
			num = va_arg(argu, char *);
			if (num == NULL)
			
				printf("(nil)");
			
			else
                        
                                printf("%s", num);
                        
			
			if (separator != NULL)
			{
				if (i == f - 1)
				{
					break;
				
				printf("%s", separator);
				}
			}

		}
	va_end(argu);
	printf("\n");
}
