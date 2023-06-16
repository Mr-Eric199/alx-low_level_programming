#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char alphabetLow[27] = "abcdef";
	for (int i = 1; i <= 9; i++)
    {
        putchar('0' + i);
        putchar('\n');
    }
    for (int i = 0; i < 7; i++)
    {
        putchar(alphabetLow[i]);
        putchar('\n');
    }



	return (0);
}
