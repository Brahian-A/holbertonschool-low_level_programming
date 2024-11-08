#include "main.h"

/**
 *aux- la funcion auxiliar
 *@div:variable que verifica la si es divicible
 *Return: si es primo 1 || si no 0
 *@n: el numero
 */
int aux(int n, int div)
{
	if (n <= 1)
	{
		return (0);
	}
	if (div * div > n)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
return (aux(n, div + 1));
}

/**
 *is_prime_number- funcion que verifica los numeros primos
 *@n: el numero
 *Return:0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (aux(n, 2));
}
