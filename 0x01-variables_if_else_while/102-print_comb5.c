#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
         for (int i = 0; i < 100; i++)
    {
        for (int j = i; j < 100; j++)
        {
            putchar('0' + (i / 10));
            putchar('0' + (i % 10));
            putchar(' ');
            putchar('0' + (j / 10));
            putchar('0' + (j % 10));
            
            if (i != 99 || j != 99)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

	return (0);
}
