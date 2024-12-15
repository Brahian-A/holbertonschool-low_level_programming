#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *
 *
 *
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nodo = *head;
	int i = 0;


	if (head == NULL || *head == NULL)
		return (-1);
	
	if (index == 0)
	{
		*head = nodo->next;

		if (*head != NULL)
			(*head)->prev = NULL;
		free(*nodo);
		return (1);
	}

	for (i == 0 && nodo != NULL && i < index; i++)
	{
		nodo = nodo->next;

		if (nodo  == NULL)
		return (-1);
	if (nodo->prev != NULL)
		nodo->prev->next = nodo->next;
	if (nodo->next != NULL)
		nodo->next->prev = nodo->prev;
	free(nodo);
	return (1);
	}




}
