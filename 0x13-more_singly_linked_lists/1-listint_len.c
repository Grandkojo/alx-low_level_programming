# include <stdio.h>
# include <stdlib.h>
# include "lists.h"

/**
 * listint_len - print the number of elements in a list
 * @h: pointer to the head of the list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}

