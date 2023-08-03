#include "main.h"
/**
 * clear_bit - Alters the value of a specified bit to 0
 * @n: Pointer to the number requiring modification
 * @index: Index of the bit to be cleared
 *
 * Return: 1 upon successful change, -1 if change is unsuccessful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
