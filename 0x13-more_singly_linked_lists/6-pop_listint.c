#include "lists.h"

/**
* pop_listint - deletes the head of a linked list
* @head: head of the node
*
* Return: data of deleted node
*/

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp = *head;

	if (*head == NULL)
	{
		return (0);
	}

	data = tmp->n;

	*head = tmp->next;
	free(tmp);
	return (data);
}

