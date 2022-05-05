#include "lists.h"

/**
* add_nodeint_end - add a new node at the end of a double linked list
* @head: head of the list
* @n: data for new node
*
* Return: address of new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		(*head) = new;
		return ((*head));
	}

	tmp = *head;
	while (tmp != NULL)
	{
		if (tmp->next == NULL)
		{
			tmp->next = new;
			new->prev = tmp;
			return (new);
		}
		tmp = tmp->next;
	}

	return ((*head));
}
