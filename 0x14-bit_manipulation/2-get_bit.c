#include "main.h"

/**
 * get_bit - Retrieves the value of a specific bit
 * @n: Decimal number under consideration
 * @index: Index of the targeted bit
 *
 * Return: The value of the requested bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
