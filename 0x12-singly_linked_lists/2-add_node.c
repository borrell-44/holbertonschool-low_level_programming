#include "lists.h"
#include <string.h>

/**
* *add_node - add a node new node with a string
* @head: the head of the list
* @str: string to be added to the new node
*
* Return: address of new elment
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	if (head != NULL)
	{
		new->str = strdup(str);
		new->next = *head;
		*head = new;
		return (*head);
	}
	return (NULL);
}

