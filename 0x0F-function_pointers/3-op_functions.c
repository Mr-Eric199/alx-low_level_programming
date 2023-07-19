#include <stdio.h>
#include <stdlib.h>
/**
 * op_add- addition funtion
 * @a: int
 * @b: int
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub- subtraction funtion
 * @a: int
 * @b: int
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- multiplication function
 * @a: int
 * @b: int
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- division function
 * @a: int
 * @b: int
 * Return: result
 */

int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}
/**
 * op_mod- modulo function
 * @a: int
 * @b: int
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}
