# include <stdio.h>
# include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char alpha;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (alpha = 'a'; alpha < 'g'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
