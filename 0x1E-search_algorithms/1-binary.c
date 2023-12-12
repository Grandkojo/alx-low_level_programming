#include "search_algos.h"


/**
 * print_array - Prints array
 * @arr: the array to print
 * @start: where to start printing
 * @end: where to end printing
 * Return: void
 */
void print_array(int *arr, size_t start, size_t end)
{
	if (arr == NULL)
		return;
	while (start <= end)
	{
		printf("%d", arr[start]);
		if (start != end)
			printf(", ");
		start++;
	}
	printf("\n");
}

/**
 * binary_search - Searches through an array
 * using the Binary Search Algorithm
 * @array: The array to search through
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The index of the found value or -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		print_array(array, left, right);
		m = (left + right) / 2;
		if (array[mid] > value)
			right = mid - 1;
		else if (array[mid] < value)
			left = mid + 1;
		else
			return (mid);
	}
	return (-1);
}
