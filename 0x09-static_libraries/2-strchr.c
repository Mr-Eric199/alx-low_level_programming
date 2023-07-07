#include "main.h"
/**
 * _strchr- prints function
 * @s: char
 * @c: char
 * Return: *S
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
