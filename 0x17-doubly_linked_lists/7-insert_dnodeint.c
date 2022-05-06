#include "lists.h"

/**
* insert_dnodeint_at_index - adds a node in the specified location
* @h: head of the linked list
* @idx: where the new node will be located
* @n: data for the new node
*
* Return: address of new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new;
	dlistint_t *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if ((*h) == NULL)
	{
		new->next = (*h);
		new->prev = NULL;
		(*h) = new;
		return ((*h));
	}

	tmp = (*h);
	for (i = 0; i < idx && tmp->next != NULL; i++)
	{
		tmp = tmp->next;
	}

	if (i == idx && tmp != NULL)
	{
		new->next = tmp;
		if (tmp->prev != NULL)
			tmp->prev->next = new;
		tmp->prev = new;
		new->prev = tmp->prev;
		return (new);
	}

	return (NULL);
}

