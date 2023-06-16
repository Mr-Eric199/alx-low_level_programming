#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int i;
	char alphabetLow[27] = "abcdef";
	for (i = 1; i <= 9; i++)
    {
        putchar('0' + i);
        putchar('\n');
    }
    for (i = 0; i < 7; i++)
    {
        putchar(alphabetLow[i]);
        putchar('\n');
    }



	return (0);
}
