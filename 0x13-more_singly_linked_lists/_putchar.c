#include <unistd.h>

/**
 * print_character - Writes the character c to the standard output.
 * @c: The character to print.
 *
 * Return: On success, returns 1. On error, returns -1 and sets errno appropriately.
 */
int print_character(char c)
{
	return (write(1, &c, 1));
}
