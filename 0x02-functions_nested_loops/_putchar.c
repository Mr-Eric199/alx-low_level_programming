#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _putchar- write the character
 * Return: return 0
*/
int _putchar(int c)
{
	return write(1, &c, 1);
}
