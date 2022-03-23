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

	for (i = 0; i <= idx; i++)
	{
		if (tmp == NULL && last == NULL)
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

