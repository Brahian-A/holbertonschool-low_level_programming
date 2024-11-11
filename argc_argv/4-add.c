#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	int sum = 0, i;
	char *p;

	if (argc == 1)
	{
		printf("0\n");
	}
	
	for (i = 1; i < argc; i++)
	{
		p = argv[i];
		
		while (*p != '\0')
		{
			if (!isdigit(*p))
			{	
				printf("Error\n");
				return(1);
			}
			p++;
		}
		sum += atoi(argv[i]);
	}
printf("%d\n", sum);
return (0);
}
	
