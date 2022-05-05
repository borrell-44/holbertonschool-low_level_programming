#include "lists.h"

/**
* free_dlistint - frees a double linked list
* @head: head of the list
*
* Return: Nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			head = head->next;
			free(tmp);
			tmp = head;
		}
		free(head);
	}
}

