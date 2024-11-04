#include <ctype.h>
#include "main.h"
/**
 *
 *
 *
 *
 *
 */

char *cap_string(char *string)
{
int capitaliza = 1;
char *original = string;

	while (*string)
	{
		if (capitaliza && isalpha(*string ))
		{
			*string = toupper(*string);
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
	return(string);



}
