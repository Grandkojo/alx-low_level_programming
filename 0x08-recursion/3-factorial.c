# include "main.h"

/**
 * factorial - prints the factorial of a number
 * @n: input integer
 * Return: factorial
 */
int factorial(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
