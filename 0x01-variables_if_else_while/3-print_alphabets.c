#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char alphabetLow[27] = "abcdefghijklmnopqrstuvwxyz";
	char alphabetUp[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (int i = 0; i < 27; i++)
    {
        putchar(alphabetLow[i]);
        putchar('\n');
    }
    for (int i = 0; i < 27; i++)
    {
        putchar(alphabetUp[i]);
        putchar('\n');
    }


	return (0);
}



