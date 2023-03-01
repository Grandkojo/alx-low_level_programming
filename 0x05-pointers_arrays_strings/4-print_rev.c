# include "main.h"

/**
 * print_rev - check description
 * Description: Prints a string in reverse, followed by a new line
 * @s: input character
 * Return: nothing
 */
void print_rev(char *s)
{
	int index = -1;

	for (s[index]; index <= 0; index--)
		_putchar(s[index]);
	_putchar('\n');
}
