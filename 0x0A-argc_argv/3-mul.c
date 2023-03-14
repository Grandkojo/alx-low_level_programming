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
	int mul;
	int num1;
	int num2;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 2)
	{
		num1 = atoi(argv[1]);
		mul = num1;
		printf("%d", mul);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
		return (0);
	}
}
