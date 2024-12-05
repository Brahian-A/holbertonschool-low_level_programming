#include "lists.h"
/**
 * add_node - Agrega un nuevo nodo al inicio de una lista enlazada
 * @head: Puntero al puntero del nodo principal de la lista
 * @str: Cadena de texto que se duplicará y almacenará en el nuevo nodo
 * Return: Dirección del nuevo elementoo NULL si la asignacion de memoria falla
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	int lon = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[lon] != '\0')
		lon++;

	new_node->len = lon;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
