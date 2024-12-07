#include "lists.h"

/**
 *dlistint_len- funcion que printea una lista enlazada
 *@h: puntero a la direccion de memoria al primer nodo
 *Return: conteo de la lista
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t contador = 0;

	while (h != NULL)
	{
		h = h->next;
		contador++;
	}
return (contador);
}
