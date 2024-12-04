#include "lists.h"

/**
 *list_len- Cuenta el número de nodos en una list
 *@h: puntero al nodo inicial
 *Return: El numeros de nodos
 */


size_t list_len(const list_t *h)
{
	size_t conteo = 0;

	while (h != NULL)
	{
		conteo++;
		h = h->next;
	}
	return (conteo);
}
