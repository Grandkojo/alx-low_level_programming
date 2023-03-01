# include "main.h"
# include <stdio.h>
/**
 * print_array - Check description
 * Description: prints n number of an array
 * of integers
 * @a: an input array
 * @n: an input integer
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	_putchar('\n');
}
