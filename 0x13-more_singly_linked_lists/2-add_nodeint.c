#include "lists.h"

/**
* *add_nodeint - adds a node at the beggining of the list
* @head: the head of the list
* @n: data for the new node
*
* Return: address of the new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}

