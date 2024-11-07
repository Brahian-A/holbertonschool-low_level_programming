#include "main.h"

/**
 *_print_rev_recursion-funcion que repito
 *@s:el puntero a imprimir
 */



void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
	return;
	}

	_print_rev_recursion(s + 1);
	 _putchar (*s);


}
