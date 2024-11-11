#include "stdio.h"

/**
 *main- imprime el numero de argumentos
 *@argv:los argumentos
 *@argc:numero de argumentos
 *Return:pepe
 */

int main(int argc __attribute__((unused)), char *argv[])
{

	while(*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
return (0);
}
