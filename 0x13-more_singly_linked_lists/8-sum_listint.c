#include "lists.h"

/**
* sum_listint - sums all the data of the list
* @head: head of the node
*
* Return: sum of data
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		if (head == NULL)
		{
			return (0);
		}

		sum += head->n;
		head = head->next;
	}
	return (sum);
}

