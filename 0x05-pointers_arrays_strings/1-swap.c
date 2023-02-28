# include "main.h"

/**
 * swap_int - check description
 * Description: Swaps the values of two integers
 * @a: input inter
 * @b: input integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
