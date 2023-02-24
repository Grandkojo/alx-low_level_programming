# include "main.h"

/**
 * _isupper - Chack code
 * @c: input character
 * Description: Checks for the uppercase character
 * Return: 1 if uppercase or 0 otherwise
 */
int _isupper(int c)
{
	int num = 0;

	char C = 'A';

	for (; C <= 'Z'; C++)
	{
		if (c == C)
			num = 1;
			break;
	}

	return (num);
}
