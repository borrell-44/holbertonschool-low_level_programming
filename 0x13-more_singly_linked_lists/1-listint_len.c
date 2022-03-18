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

