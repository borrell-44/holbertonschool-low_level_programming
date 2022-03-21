#include "lists.h"

/**
* listint_len - get the number of elements in a list
* @h: the head of the list
*
* Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

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
	unsigned int end = listint_len(*head) + 1;
	listint_t *tmp = *head;
	listint_t *last = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}

	if (end == idx)
	{
		add_nodeint_end(head, n);
		return (*head);
	}

	for (i = 0; i <= idx; i++)
	{
		if (last == NULL)
		{
			return (NULL);
		}

		if (i == idx)
		{
			new->n = n;
			new->next = tmp;
			last->next = new;
			return (new);
		}
		last = tmp;
		tmp = tmp->next;
	}

	return (NULL);
}

