# include <stdio.h>
# include <stdlib.h>
# include "lists.h"

/**
 * free_listint - free a list
 * @head: pointer to the head of the list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
