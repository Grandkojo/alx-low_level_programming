# include "main.h"

/**
 * print_square - Check description
 * @size : size of square
 * Description: print a square using #
 * Return: Nothing
 */
void print_square(int size)
{
	int length, width;
	char hash = '#';

	if (size > 0)
	{
		for (length = 0; length < size; length++)
		{
			for (width = 0; width <= length; width++)
				_putchar(hash);
		_putchar(hash);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
