#include "main.h"
/**
 * _sqrt_recursion - recursion function
 * @n: int
 * Return: return int
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - square function
 * @n: int
 * @val: int
 * Return: return int
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return  (square(n, val + 1));
	else
		return (-1);
}
