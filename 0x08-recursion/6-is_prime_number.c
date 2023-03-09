# include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 * @n: input integer
 * Return: 1 if prime or 0 otherwise
 */
int is_prime_number(int n)
{
	if ((n / 1 == n) && (n % n == 0))
	{
		return (1);
	}
	return (0);
}
