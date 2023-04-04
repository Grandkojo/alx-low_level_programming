# include <stdio.h>
# include <stdlib.h>
# include "lists.h"

/**
 * free_listint2 - free a list and sets the head to null
 * @head: double pointer to the head
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node = NULL;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
}
