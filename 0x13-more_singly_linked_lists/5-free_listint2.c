#include "lists.h"

/**
* free_listint2 - frees a list and sets the head to NULL
* @head: the head of the list
*
* Return: Nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *h = *head;

	if (*head == NULL)
	{
		return;
	}

	while (h != NULL)
	{
		tmp = h;
		h = h->next;
		free(tmp);
	}
	free(h);
	*head = NULL;
}

