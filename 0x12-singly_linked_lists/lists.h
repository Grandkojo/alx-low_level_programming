#ifndef _LINKED_LISTS
#define _LINKED_LISTS
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *);
unsigned int _strlen(char *);
int _putchar(char);
size_t list_len(const list_t *);
list_t *add_node(list_t **, const char *);

#endif
