# include "main.h"

/**
 * more_numbers - Check description
 * Desription: Print 10 times the numbers from 0 to 14
 * Return: Nothing
 */
void more_numbers(void)
{
	int times = 0;
	int num;

	while (times <= 14)
	{
		for (num = 1; num <= 14; num++)
		{
			if (num > 9)
				_putchar(num / 10 + '0');

			_putchar(num % 10 + '0');
	
		}
	}
	times++;
	_putchar('\n');
}
