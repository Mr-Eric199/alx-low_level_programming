#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
