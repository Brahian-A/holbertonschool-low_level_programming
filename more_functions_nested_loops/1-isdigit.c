#include "main.h"

/**
 *_isdigit- funcion que busca del 1 al 9
 *@c: variable que prueba del 1 al 9
 *Return: 1 si esta entre el 1 y el 9  0 si no
 */

int _isdigit(int c)
{

if (c >= '0' && c <= '9')

	return (1);
	else
	return (0);
}
