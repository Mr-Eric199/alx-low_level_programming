#include "main.h"
/**
 * _memset- char function
 * @s: char
 * @b: char
 * @n: int
 * Return: return chat
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * _calloc-  malloc function
 * @nmemb: int
 * @size: int
 * Return: return p
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	_memset(p, 0, (nmemb * size));
	return (p);
}