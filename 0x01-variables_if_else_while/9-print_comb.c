#include <stdlib.h>
#include <stdio.h>
/**
 * main- main function
 * Return: return 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
