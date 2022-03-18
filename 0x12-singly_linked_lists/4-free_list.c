#include "lists.h"

/**
* free_list - frees a list
* @head: the head of the list
*
* Return: Nothing
*/

void free_list(list_t *head)
{
	free(head->str);
	free(head);
}

