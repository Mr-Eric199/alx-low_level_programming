#include <unistd.h>
/**
 * _putchar- print function
 * @c: char
 * Return: On success 1.
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
