#include <stdio.h>
#include "main.h"

/**
 * main- main function
 * Return: return 0
*/
int main(void)
{
    char n[9]="_putchar";
    int i;

    for (i = 0; i < 8; i++)
    {
        _putchar(n[i]);
        _putchar('\n');
    }
    return (0);
}
