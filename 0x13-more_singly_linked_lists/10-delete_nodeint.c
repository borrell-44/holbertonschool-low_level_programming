#include "lists.h"

/**
* delete_nodeint_at_index - delete a node at the specified position
* @head: head of the node
* @index: position of the new node
*
* Return: 1 (succes) and -1 (failed)
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = *head;
	listint_t *last = *head;

	if (index == 0)
	{
		if (*head == NULL)
		{
			return (-1);
		}

		*head = tmp->next;
		free(tmp);
		return (1);
	}

	for (i = 0; i <= index; i++)
	{
		if (tmp == NULL)
		{
			return (-1);
		}

		if (i == index)
		{
			last->next = tmp->next;
			free(tmp);
			return (1);
		}
		last = tmp;
		tmp = tmp->next;
	}

	return (-1);
}

