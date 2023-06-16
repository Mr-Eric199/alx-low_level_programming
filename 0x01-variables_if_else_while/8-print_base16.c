#include <stdlib.h>
#include <stdio.h>
/**
 * main- main function
 * Return: return 0
*/
int main(void)
{
	int i;
	char alphabetLow[27] = "abcdef";

	for (i = 1; i <= 9; i++)
	{
		putchar('0' + i);
	}
	for (i = 0; i < 7; i++)
	{
		putchar(alphabetLow[i]);
	}
	putchar('\n');
	return (0);
}
