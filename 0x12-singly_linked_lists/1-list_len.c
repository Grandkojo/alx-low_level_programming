# include <stdlib.h>
# include <stdio.h>
# include "lists.h"
# include <string.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the head of linked list
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != 0)
	{
		length++;
		h = h->next;
	}
	return (length);
}
