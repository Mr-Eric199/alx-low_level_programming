#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char alphabetLow[27] = "abcdefghijklmnopqrstuvwxyz";
	for (int i = 26; i >= 0; i--)
    {
        putchar(alphabetLow[i]);
        putchar('\n');
    }



	return (0);
}
