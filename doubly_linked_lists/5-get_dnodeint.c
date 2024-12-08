#include "lists.h"

/**
 *get_dnodeint_at_index- funcion que retorna el nodo en la pocicion index
 *@head: puntero al nodo en la primer poccion
 *@index: pocicion donde hay que retornar
 *Return: el nodo en la pocicion de index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
