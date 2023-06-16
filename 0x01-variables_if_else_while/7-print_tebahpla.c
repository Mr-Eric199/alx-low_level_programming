#include <stdlib.h>
#include <stdio.h>
/**
 * main- main function
 * Return: return 0
*/
int main(void)
{
	int i;
	char alphabetLow[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 25; i >= 0; i--)
	{
		putchar(alphabetLow[i]);
	}
	putchar('\n');
	return (0);
}
