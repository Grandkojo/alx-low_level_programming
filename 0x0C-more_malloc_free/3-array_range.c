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
	int i;
	int j;

	if  (min > max)
		return (NULL);

	integers = malloc((max - min) + 1);
	if (integers == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		for (j = 0; j < ((max - min)  + 1); j++)
			integers[j] = i;
	}
	return (integers);
}
