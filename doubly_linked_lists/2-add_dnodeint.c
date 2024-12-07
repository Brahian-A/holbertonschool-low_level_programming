#include "lists.h"
/**
 *add_dnodeint- funcion que a�ade un nuevo nodo a la head.
 *@head: doble puntero al inicio de la lista.
 *@n: valor que se almacenará en el nuevo nodo.
 *Return: La dirección del nuevo nodo si se crea correctamente.
 *NULL si ocurre algún erro.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = *head;

	if (*head != NULL)
		(*head)->prev = n_node;


	*head = n_node;
	return (n_node);


}
