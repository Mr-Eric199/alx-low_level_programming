#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int i;
	char alphabetLow[27] = "abcdefghijklmnopqrstuvwxyz";
	for (i = 26; i >= 0; i--)
    {
        putchar(alphabetLow[i]);
        putchar('\n');
    }



	return (0);
}
