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
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
