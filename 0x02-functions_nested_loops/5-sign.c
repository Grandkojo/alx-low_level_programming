# include "main.h"

/**
 * print_sign - Check description
 * @n: input character
 * Descriptionn: Prints the sign of a number
 * Return: 1 if greater than 0, 0 if zero and -2 if less than 0
 */
int print_sign(int n)
{
	int num;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		value = -1;
		_putchar('-');
	}
	return (value);
}
