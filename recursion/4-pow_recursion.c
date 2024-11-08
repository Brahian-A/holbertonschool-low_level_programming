#include "main.h"
/**
 *_pow_recursion- la funcion que hace la potencia
 *@x:valor a elevar a la potencai de y
 *@y:valor de la potnecia de x
 *Return: x a la potencia de y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (y * _pow_recursion(x, y - 1));
}
