#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}

	for (i = 0; h->next != NULL; i++)
	{
		printf("%d", h->n);
		h = h->next;
	}
	putchar('\n');

	for (; h->prev != NULL; i++)
	{
		printf("%d", h->n);
		h = h->prev;
	}
	putchar('\n');

	return (i);
}

