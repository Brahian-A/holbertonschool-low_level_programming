#include "lists.h"

/**
 *add_dnodeint_end-Añade un nuevo nodo al final de una lista doblemente enlazada
 *@head: Doble puntero que apunta al primer nodo de la lista.
 *n:Valor entero que contendrá el nuevo nodo
 *Return: la direccion del nuevo nodo
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
	n_node->prev = final;

return (n_node);






}
