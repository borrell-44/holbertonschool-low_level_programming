#include "lists.h"

/**
* *get_nodeint_at_index - it will give the node that was specified
* @head: head of the node
* @index: the position of the node that will be return
*
* Return: returns node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i <= index; i++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		
		if (i == index)
		{
			return (head);
		}
		head = head->next;
	}

	return (NULL);
}

