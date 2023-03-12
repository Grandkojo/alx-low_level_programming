# include <stdio.h>
# include <stdlib.h>

/**
 * main - prints the products of two integers but returns error
 * if the arguments are less thsn 2
 * @argc: input character
 * @argv: input array of strings
 * Return: Always (0)  Success
 */
int main(int argc, char *argv[])
{
	int count;
	int mul = 1;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			mul *= atoi(argv[count]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
