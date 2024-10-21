#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - 1 The last digit 
 * Return 0 
 */
int main(void)
{
	int n, numero;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	numero = n % 10; 
	
	printf ("Last digit of %d is" ,n);

	if (numero > 5)
		printf("%d and is greater than 5\n" ,numero);
	
	else if (numero == 0)
		printf("%d and is 0\n" ,numero );

	else 
		printf ("%d and is less than 6 and not 0\n" ,numero);
	
	                   

	return (0);
}
