#include "main.h"
/**
 **cap_string-funcion que capitaliza despues de los espacios
 *@string: el string al cual caitalizar
 *Return: el string caitalizadeo despues de los espacios
 */

char *cap_string(char *string)
{
int capitaliza = 1;
char *original = string;

	while (*string)
	{
		if (capitaliza && *string >= 'a' && *string <= 'z')
		{
			*string = *string - ('a' - 'A');
			capitaliza = 0;
		}
			else if (*string == ' ' || *string == '\t' || *string == '\n' ||
			*string == ',' || *string == ';' || *string == '.' ||
			*string == '!' || *string == '?' || *string == '"' ||
			*string == '(' || *string == ')' || *string == '{' || *string == '}')
			{
				capitaliza = 1;
			}
		string++;
	}
	return (original);



}
