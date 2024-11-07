#include "main.h"

/**
 *_strlen_recursion- funcion que repito
 *@s:el puntero a imprimir
 *Return: pepe
 */



int _strlen_recursion(char *s)
{
	int largo;

	if (*s == '\0')
		return (0);

	{
		largo =  _strlen_recursion(s + 1);
		largo += 1;
	}
		return (largo);
}
