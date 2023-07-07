#include "main.h"
/**
 * _strlen - length function
 * @s: input char
 * Return: return string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
