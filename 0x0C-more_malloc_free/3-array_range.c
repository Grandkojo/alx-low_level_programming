# include "main.h"
# include <stdio.h>
# include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: the pointer to the newly ceated array
 */
int *array_range(int min, int max)
{
	int *integers;
	int j;
	int diff = max - min;

	if  (min > max)
		return (NULL);

	integers = malloc((diff + 1) * sizeof(int));
	if (integers == NULL)
		return (NULL);
	for (j = 0; j <= diff; j++)
		integers[j] = min++;

	return (integers);
}
