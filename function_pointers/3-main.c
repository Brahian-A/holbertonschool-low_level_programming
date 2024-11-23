#include "3-calc.h"

/**
 * main - main con los argumentos
 * @argc: numero de argumetos
 * @argv: array con los argumentos
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, resultado;
	int (*op)(int, int);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	resultado = op(num1, num2);
	printf("%d\n", resultado);

	return (0);

}
