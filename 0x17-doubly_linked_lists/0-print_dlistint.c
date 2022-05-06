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
	dlistint_t *tmp = h;

	if (h == NULL)
	{
		return (0);
	}

	for (i = 0; tmp != NULL; i++)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}

	return (i);
}

