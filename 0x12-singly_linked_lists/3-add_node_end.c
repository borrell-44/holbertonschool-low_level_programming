#include "lists.h"
#include <string.h>

/**
* *add_node_end - add a new node node at the end of a list
* @head: the head of the list
* @str: string to be added to the new node
*
* Return: address of new elment
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return (tmp);
}

