# include "main.h"
# include <stdio.h>
# include <stdlib.h>

/**
 * string_nconcat - a function that concatnates two strings
 * @s1: input string
 * @s2: input string
 * @n: input integer
 * Return: a pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;

	while (s1[s1_len])
		s1_len++;

	while (s2[s2_len])
		s2_len++;
	if (n >= s2_len)
	{
		n = s2_len;
	}
	char *result = malloc(s1_len + n + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	unsigned int i = 0;

	for (; i < (s1_len + n); i++)
	{
		if (i < s1_len)
			result[i] = *s1, s1++;
		else
			result[i] = *s2, s2++;
	}
	result[i] = '\0';
	return (result);
}
