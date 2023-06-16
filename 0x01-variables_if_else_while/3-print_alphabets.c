#include <stdlib.h>
#include <stdio.h>
/** more headers goes there
 * main- main function
 * Return- return o
*/
int main(void)
{
	char alphabetLow[27] = "abcdefghijklmnopqrstuvwxyz";
	char alphabetUp[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 27; i++)
	{
		putchar(alphabetLow[i]);
		putchar('\n');
	}
	for (i = 0; i < 27; i++)
	{
		putchar(alphabetUp[i]);
		putchar('\n');
	}
	putchar('\n');
	return (0);
}



