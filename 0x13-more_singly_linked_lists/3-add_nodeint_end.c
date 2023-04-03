# include <stdio.h>
# include <stdlib.h>
# include "lists.h"

/**
 * add_nodeint_end - adds new node to the end of a list
 * @head: double pointer to the head of list
 * @n: integer data
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temporary;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	temporary = *head;

	while (temporary->next)
	{
		temporary = temporary->next;
	}
	return (newnode);
}

