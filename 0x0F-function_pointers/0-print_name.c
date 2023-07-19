#include "function_pointers.h"
/**
 * print_name- prints name function
 * @name: char
 * @f: void function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
