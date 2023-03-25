# include <stdio.h>
# include <stdlib.h>
# include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: array
 * @size: size of elements of the array
 * @cmp: pointer to the function to compare integers
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size < 0)
		return (-1);
	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);
	if (i == size)
		return (-1);
	return (-1);
}
