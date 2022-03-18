#include "lists.h"

/**
* print_listint - print the contents of a list
* @h: the head of the list
*
* Return: number of elements
*/

size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}

