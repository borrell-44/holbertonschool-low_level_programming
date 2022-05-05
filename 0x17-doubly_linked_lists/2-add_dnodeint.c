#include "lists.h"

/**
* add_dnodeint - adds a new node at the beggining of a double linked list
* @head: head of the file
* @n: data for the new node
*
* Return: new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if ((*head) == NULL)
	{
		(*head) = malloc(sizeof(dlistint_t));
		if ((*head) == NULL)
		{
			return (NULL);
		}

		(*head)->n = n;
		(*head)->next = NULL;
		(*head)->prev = NULL;
		return (*head);
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = (*head);
	new->prev = NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = new;
	}
	(*head) = new;

	return ((*head));
}

