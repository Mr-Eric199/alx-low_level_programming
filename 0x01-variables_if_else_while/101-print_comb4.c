#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
     for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            for (int k = j + 1; k < 10; k++)
            {
                putchar('0' + i);
                putchar('0' + j);
                putchar('0' + k);
                
                if (i != 7 || j != 8 || k != 9)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
	return (0);
}
