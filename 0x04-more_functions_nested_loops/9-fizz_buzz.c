# include <stdio.h>
# include <stdlib.h>

/**
 * main - Fizz Buzz program
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (number % 3 == 0 && number % 5 == 0)
			printf("FizzBuzz ");

		else if (number % 5 == 0)
			printf("Buzz ");

		else if (number % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", number);
	}
	printf("Buzz\n");
	return (0);
}