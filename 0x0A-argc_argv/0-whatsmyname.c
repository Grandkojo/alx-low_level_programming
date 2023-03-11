# include <stdio.h>

/**
 * main - prints the files' name
 * @argc: argument for input intger
 * @argv: argument for array of strings
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc == 1)
	{
		count = 0;
		printf("%s\n", argv[count]);
	}
	return (0);
}
