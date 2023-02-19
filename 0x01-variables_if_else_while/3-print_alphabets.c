# include <stdio.h>
# include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low, high;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (high = 'A'; high <= 'Z'; high++)
		putchar(high);
	putchar('\n');
	return (0);
}
