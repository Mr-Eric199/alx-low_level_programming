#include "main.h"
/**
 * malloc_checked- malloc function
 * @b: int
 * Return: return pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}