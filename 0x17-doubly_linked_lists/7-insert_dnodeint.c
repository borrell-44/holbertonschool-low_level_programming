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
	unsigned int i = 0;
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if ((*h) == NULL || idx == i)
	{
		new->next = (*h);
		new->prev = NULL;
		(*h) = new;
		return ((*h));
	}

	tmp = (*h);
	for (; i < idx && tmp->next != NULL; i++)
	{
		tmp = tmp->next;
	}

	if (i == idx && tmp != NULL)
	{
		new->next = tmp;
		new->prev = tmp->prev;
		tmp->prev = new;
		if (new->prev != NULL)
			new->prev->next = new;
		return (new);
	}

	return (NULL);
}

