#include <stdlib.h>
#include <stdio.h>
/**
 * main- main function
 * Return: return 0
*/
int main(void)
{
	int i;
	char alphabetLow[27] = "abcdefghijklmnopqrstuvwxyz";
	
	for (i = 0; i < 26; i++)
	{
		if (alphabetLow[i] == 'q' || alphabetLow[i] == 'e' )
		{
			continue;
		}
		putchar(alphabetLow[i]);
		putchar('\n');
	}
return (0);
}
