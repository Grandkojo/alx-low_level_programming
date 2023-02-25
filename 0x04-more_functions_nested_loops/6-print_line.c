# include "main.h"

/**
 * print_line - Check description
 * @n: input character
 * Description: Drawsa straight line in the terminal
 * Return: nothing
 */
void print_line(int n)
{
	char line = '_';

	if (n <= 0)
		_putchar('\n');
	else
		_putchar(line * (n + '0'));
	_putchar('\n');
}
