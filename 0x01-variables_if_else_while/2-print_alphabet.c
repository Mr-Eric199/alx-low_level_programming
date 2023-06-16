#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int i;
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
	for (i = 0; i < 27; i++)
    {
        putchar(alphabet[i]);
        putchar('\n');
    }

	return (0);
}

