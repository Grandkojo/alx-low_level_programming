# include "main.h"
# include <stdio.h>
# include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
