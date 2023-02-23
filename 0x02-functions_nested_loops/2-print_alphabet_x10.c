# include "main.h"

/**
 * print_alphabet_x10 - check the description
 * Description: Print alphabet 10 times
 * Return :Nothing
 */
void print_alphabet_x10(void)
{
	char alpha;
	int num;

	for (num = 0; num < 10; num++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}

}
