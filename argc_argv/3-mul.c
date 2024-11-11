#include <stdio.h>
#include <stdlib.h>

/**
 *main- la funcion
 *@argc:cantidad de argumentos
 *@argv:esos argumentos
 *Return:pepe
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
		else
		{
			printf("Error\n");
		}
return(0);
}
