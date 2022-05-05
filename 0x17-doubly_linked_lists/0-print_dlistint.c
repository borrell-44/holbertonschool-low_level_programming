#include "lists.h"

/**
* print_dlistint - prints a double linked list
* @h: head of the list
*
* Return: number of elements
*/

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}

	for (i = 0; h->next != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	printf("%d\n", h->n);

	for (; h->prev != NULL; i++)
	{
		h = h->prev;
	}

	return (i);
}

