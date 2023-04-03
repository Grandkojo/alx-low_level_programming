# include <stdio.h>
# include <stdlib.h>
# include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning of the list
 * @head: double pointer to the head of the list
 * @n: integer data
 * Return: pointer to the new node created
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
