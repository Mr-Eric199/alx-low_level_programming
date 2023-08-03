#include "main.h"

/**
 * set_bit - Modifies a specified bit at an index to be 1
 * @n: Pointer to the number to be modified
 * @index: Index of the bit to be set to 1
 *
 * Return: 1 upon successful modification, -1 if modification fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
