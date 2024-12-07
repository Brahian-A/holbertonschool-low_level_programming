#include "lists.h"

/**
 *
 *
 *
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node = malloc(sizeof(dlistint_t)), *final = *head;

		if (n_node == NULL)
			return (NULL);

	n_node->n = n;
	n_node->next = NULL;
	n_node->prev = NULL;

	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}

	while (final->next != NULL)
		final = final->next;

	final->next = n_node;
	n_node->prev= final;

return (n_node);






}
