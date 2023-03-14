# include "main.h"
# include <stdio.h>
# include <stdlib.h>

/**
 * _strdup - Returns a pointer to  a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: input character
 * Return: NULL is str is NULL or a pointer to the duplicatd string
 */
char *_strdup(char *str)
{
	char *dup = malloc(sizeof(*str));
	*dup = *str;

	if (str == NULL)
		return (NULL);
	if (sizeof(*dup) < sizeof(*str))
		return (NULL);
	return (dup);
}
