# include <stdio.h>
# include "main.h"
# include <stdlib.h>

/**
 * malloc_checked - a funtion tat allocates memory using malloc
 * @b: input integer
 * Return: pointer to te allocatd memory
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
