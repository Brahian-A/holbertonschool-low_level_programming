#include "variadic_functions.h"

/**
 *print_all- funcion que printea
 *
 *
 *
 *
 */



void print_all(const char * const format, ...)
{
	va_list argu;
	int i = 0;
	char *string;
	char c;
	int num;
	float f;

	va_start(argu, format);

	while (format[i])
	{
		if (format[i] == 'c')
		{
			c = va_arg(argu, int);
			printf("%c", c);
		}

		else if (format[i] == 'i')
		{
			num = va_arg(argu, int);
			printf("%d", num);
		}
		else if (format[i] == 'f')
		{
			f = va_arg(argu, double);
			printf("%f", f);
		}

		else if (format[i] == 's')
		{
			string = va_arg(argu, char *);
			if (string != NULL)
				printf("%s", string);
		
			else printf("(nil)");
		}
		i++;
		va_end(argu);
	}
	printf("\n");
}
