#include "lists.h"

/**
 *print_list- funcion que imprime los elementos de una lista
 *@h: puntero h que apunta al primer nodo de la lista
 *Return: El numeros de nodos impresos
 */

size_t print_list(const list_t *h)
{
	size_t conteo = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		conteo++;
		h = h->next;
	}
	return (conteo);
}
