#include "lists.h"

/**
* dlistint_len - finds the len of a double linked list
* @h: head of the file
*
* Return: lenght of list
*/

size_t dlistint_len(const dlistint_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}

	for (i = 0; h->next != NULL; i++)
	{
		h = h->next;
	}

	for (; h->prev != NULL; i++)
	{
		h = h->prev;
	}

	return (i);
}

