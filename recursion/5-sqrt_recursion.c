#include "main.h"

/**
 *
 *
 *
 *
 *
 */

int _sqrt_recursion(int n, int raiz)
{
	if (raiz * raiz == n)
	{
		return (raiz);
	}
	else if (raiz + raiz > n)
	{
		return(-1);
	}
	return _sqrt_recursion(n, raiz + 1);
}
