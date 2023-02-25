# include "main.h"

/**
 * print_diagonal - Check description
 *@n: input character
 *Description: Prints diagonal line
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int first, second;

	if (n > 0)
	{
		for (first = 0; first < n; first++)
		{
			for (second = 0; second < first; second++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
