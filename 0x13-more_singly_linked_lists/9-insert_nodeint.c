#include "lists.h"

/**
 * *insert_nodeint_at_index - insert a node at the specified position
 * @head: head of the node
 * @idx: position of the new node
 * @n: data of the new node
 *
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;


	for (i = 1; tmp != NULL && i != idx; i++)
	{
		tmp = tmp->next;
	}

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}

	if (idx > i)
	{
		return (NULL);
	}
	else
	{
		new->next = tmp->next;
		tmp->next = new;
		return (new);
	}

	return (NULL);
}

