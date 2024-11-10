#include "main.h"

/**
 * aux - funcion auxiliar
 * @i:variable que itera
 * @num: numero
 * Return: pepe
 */


int aux(int num, int i)
{
	if (num < 0 || num == 0)
	{
		return (-1);
	}
	if (i * i == num)
	{
		return (i);
	}
	if (i * i > num)
	{
		return (-1);
	}
	return (aux(num, i + 1));


}


/**
 * _sqrt_recursion - funcion
 * @n: numero
 * Return: pepe
 */

int _sqrt_recursion(int n)
{
	return (aux(n, 1));
}
