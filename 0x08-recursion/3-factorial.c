#include "main.h"

/**
 * factorial- factorial function
 * @n: int
 * Return: return int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
