#include "lists.h"

/**
* get_dnodeint_at_index - gets the specified node
* @head: head of the list
* @index: the number of the node in the list
*
* Return: node specified by index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i;

	for (i = 0; i < index && tmp->next != NULL; i++)
	{
		tmp = tmp->next;
	}

	if (tmp != NULL && i == index)
	{
		return (tmp);
	}

	return (NULL);
}

