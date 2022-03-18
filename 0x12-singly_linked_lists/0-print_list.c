#include "lists.h"

/**
* _strlen - gets the length of a string
* @str: string from wich to get the length
*
* Return: length of string
*/

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{}

	return (i);
}

/**
* print_list - print the elements of a list
* @h: the head of the list
*
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	int count = 0;
	int len;

	while (h != NULL)
	{
		if (h == NULL)
		{
			exit(1);
		}
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			len = _strlen(h->str);
			printf("[%d] %s\n", len, h->str);
			h = h->next;
		}
		count++;
	}
	return (count);
}

