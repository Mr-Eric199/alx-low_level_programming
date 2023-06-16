#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char alphabetLow[27] = "abcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i < 27; i++)
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
