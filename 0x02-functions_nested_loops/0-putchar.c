# include "main.h"
# include <stdio.h>
# include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char word[9] = "_putchar";
	int number;

	for (number = 0; number < 9; number++)
		_putchar(word[number]);
	_putchar('\n');
	return (0);
}
