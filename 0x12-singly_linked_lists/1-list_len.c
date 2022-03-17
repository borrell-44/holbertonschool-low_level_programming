#include "lists.h"

/**
* list_len - print the elements of a list
* @h: the head of the list
*
* Return: the number of elements
*/

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

