#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the sizes of various types on the computer it is compiled and run on.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
    printf("Size of char: %zu byte(s)\n", sizeof(char));
    printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of float: %zu byte(s)\n", sizeof(float));
    printf("Size of double: %zu byte(s)\n", sizeof(double));
    printf("Size of long: %zu byte(s)\n", sizeof(long));
    printf("Size of long long: %zu byte(s)\n", sizeof(long long));

    return (0);
}

