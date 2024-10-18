#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - positivo o negativo
 * Return: 0
 */
int main(void)
{
srand(time(0));
int n = rand() % 11 - 3;

	printf("%d ", n);
	if (n > 0)
	{
	printf("is positive\n");
	}
	else if (n == 0)
	{
	printf("is zero\n");
	}
	else
	{
	printf("is negative\n");
	}
return (0);
}
