#include "lists.h"

/**
 *free_dlistint- funcion que libera memoria
 *@head: puntero al primer nodo
 *
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *recorre;

	while (head != NULL)
	{
		recorre = head;
		head = head->next;
		free(recorre);
	}
}
