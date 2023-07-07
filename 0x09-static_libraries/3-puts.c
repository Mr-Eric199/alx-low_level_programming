#include "main.h"
/**
 * _puts- print function
 * @str: string
 * Return: return void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
