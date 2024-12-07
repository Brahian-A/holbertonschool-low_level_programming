#include "lists.h"

/**
 *print_dlistint- funcion que printea una lista enlazada
 *h@: puntero a la direccion de memoria al primer nodo
 *Return: conteo de la lista
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t contador = 0;

	while(h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		contador++;
	}
return (contador);
}
