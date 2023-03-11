# include <stdio.h>

/**
 * main - Prints the number of arguments paseed into it
 * @argc: argument integer
 * @argv: argument array of strings
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc > 1)
	{
	printf("%d\n", argc - 1);
	}
	else
		printf("%d\n", 0);
	return (0);
}
