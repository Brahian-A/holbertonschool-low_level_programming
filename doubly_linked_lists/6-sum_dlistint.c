#include "lists.h"

/**
 *sum_dlistint- fuuncion que suma mientras iteran los nodos
 *@head: puntero al primer nodo
 *Return: la suma de la iteracion de todos los nodos
 */

int sum_dlistint(dlistint_t *head)
{
	int suma = 0;

	while (head != NULL)
	{
		suma += head->n;
		head = head->next;
	}
return (suma);
}
