#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
     for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            putchar('0' + i);
            putchar('0' + j);

            if (i != 8 || j != 9)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
	return (0);
}
