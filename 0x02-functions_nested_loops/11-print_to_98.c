# include "main"

/**
 * print_to_98 - check code
 *Desription: prints from n to 98
 *Return: Nothing
 */
void print_to_98(int n)
{
	if ( n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf(", ");
	}
}
