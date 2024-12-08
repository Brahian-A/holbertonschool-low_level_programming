#include "lists.h"

/**
 *
 *
 *
 *
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_node = malloc(sizeof(dlistint_t)), *final;
	unsigned int i = 0;

	if (n_node == NULL)
		return (NULL);

	if (h == NULL)
		return (NULL);

	n_node->n = n;

	if (idx == 0)
	{
		n_node->next = *h;
		n_node->prev = NULL;

}
