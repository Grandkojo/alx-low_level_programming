# include <stdio.h>
# include "3-calc.h"
# include <stdlib.h>

/**
 * op_add - function that returns the sum of a and b
 * @a: input intger
 * @b: input integer
 * Return: The result of a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a fumction that returns the difference of a and b
 * @a: an input integer
 * @b: input integer
 * Return: The result of a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that returns the product of a and b
 * @a: input integer
 * @b: input integer
 * Return: The result of a * b
 */
int op_mul(int a, int b)
{
	return (a - b);
}

/**
 * op_div - a funtion that returns the division of a and b
 * @a: input integer
 * @b: input integer
 * Return: The result of a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a funtion that returns the modulo of a and b
 * @a: input integer
 * @b: input integer
 * Return: The result of a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
