# include "main.h"
# include <stdio.h>

/**
 * _strstr -  Locates a substrinng
 * @haystack: input character
 * @needle: input character
 * Return: Pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack  = starth + 1;
	}
	return (NULL);
}
