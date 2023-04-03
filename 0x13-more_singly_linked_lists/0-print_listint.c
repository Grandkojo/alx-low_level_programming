# include <stdio.h>
# include <stdlib.h>
# include "lists.h"

/**
 * print_listint - prints all the elements of the list
 * @h: pointer to the head of the list
 * Return: The number of nodes
 */
size_t print_listint(const int listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		count++
	}
	return (count);
}
