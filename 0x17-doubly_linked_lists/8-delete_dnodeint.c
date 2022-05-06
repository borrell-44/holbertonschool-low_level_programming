#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the specified node
* @head: head of the linked list
* @index: where the node to be deleted will be located
*
* Return: 1 if succeeded or -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = *head;

	if (head == NULL || tmp == NULL)
	{
		return (-1);
	}

	if (index == i)
	{
		if ((*head)->next == NULL)
		{
			(*head) = NULL;
		}

		else
		{
			(*head) = tmp->next;
			(*head)->prev = NULL;
		}

		return (1);
	}

	for (; i < index && tmp->next != NULL; i++)
	{
		tmp = tmp->next;
	}

	if (i == index && tmp != NULL)
	{
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;

		if (tmp->prev != NULL)
			tmp->prev->next = tmp->next;

		return (1);
	}
	return (-1);
}

