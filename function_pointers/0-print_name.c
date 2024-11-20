#include "function_pointers.h"

/**
 *print_name- funcion que printea el nombre
 *@name: puntero que contiene el nombre
 *@f: puntero que aputna a la funcion f de tipo char
 */



void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{	
		f(name); 
	}
}
