#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main- funcion que suma
 *@argc: catidad de argumentos
 *@argv: esos argumentos
 *Return: suma de argumentos
 */

int main(int argc, char *argv[])
{
	int sum = 0, i;
	char *p;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		p = argv[i];

		while (*p != '\0')
		{
			if (!isdigit(*p))
			{
				printf("Error\n");
				return (1);
			}
			p++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (1);
}

