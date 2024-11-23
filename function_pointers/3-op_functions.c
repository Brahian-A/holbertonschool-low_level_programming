#include "3-calc.h"

/**
 *op_mul- funcion que multiplica
 *@a:numero a  a multiplicar
 *@b:numero b  a multiplicar
 *Return: a * b
 */


int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_add- funcion que suma
 *@a: numero a a sumar
 *@b: numero b a sumar
 *Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub- funcion que resta
 *@a: numero a a restar
 *@b: numero b a restar
 *Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_div- funcion que divide si no es 0
 *@a: numero a a dividir
 *@b: numero b a dividir
 *Return: a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod- funcion que devuelve el modulo (el resto)
 *@a: numero a a modular
 *@b: numero b a modular
 *Return: a % b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
