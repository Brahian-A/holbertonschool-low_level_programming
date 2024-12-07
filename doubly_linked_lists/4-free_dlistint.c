#include "lists.h"

/**
 *
 *
 *
 *
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
