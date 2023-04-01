# include "lists.h"
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

/**
 * _strlen - finds the length of a string
 * @s: string to be searched
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int i;

	while (*s)
	{
		s++;
	}

	return (i);
}
/**
 * add_node - adds new node to the beginning of a linked list
 * @head: double pointer to the head of a linked list
 * @str: string to add the new node
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (head != NULL && str != NULL)
	{
		newnode = malloc(sizeof(list_t));
		if (newnode == NULL)
			return (NULL);

		newnode->str = strdup(str);
		newnode->len = _strlen(str);
		newnode->next = *head;
		*head = newnode;

		return (newnode);
	}

	return (0);
}
