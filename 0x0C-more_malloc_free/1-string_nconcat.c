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
	int s1_len = 0;
	int s2_len = 0;

	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;
	if (n >= s2_len)
	{
		n = s2_len;
	}
	char *result = (char *) malloc(s1_len + n + 1);

	if (result == NULL)
	{
		exit(1);
	}
	int i = 0;

	for (i = 0; i < s1_len; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		result[s1_len + 1] = s2[1];
	}
	result[s1_len + n] = '\0';
	return (result);
}
