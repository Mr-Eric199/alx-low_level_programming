Hello World
1.	Gcc -E $CFILE -o c - runs a C file through the preprocessor and save the result into another file.
2.	Gcc -c $CFILE  - compiles a C file but does not link.
3.	gcc -S $CFILE  - generates the assembly code of a C code and save it in an output file.
4.	gcc  $CFILE -o cisfun - compiles a C file and creates an executable named cisfun.
5.	prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
#include <stdio.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the message "Programming is like
 *              building a multilingual puzzle" and returns 0.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
    puts("Programming is like building a multilingual puzzle\n");

    return (0);
}
6.	prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
/**
 * main - Entry point of the program
 *
 * Description: This function prints the message "with proper grammar, but the outcome is a piece of art”
*
 * Return: Always 0 (success)
 */

int main(void)
{
    printf("with proper grammar, but the outcome is a piece of art\n");

    return (0);
}

7.	prints the size of various types on the computer it is compiled and run on.
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the sizes of various types
 *              on the computer it is compiled and run on.
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

8.	gcc -S -masm=intel $CFILE -o ${CFILE%.c}.s - generates the assembly code (Intel syntax) of a C code and save it in an output file.
9.	prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
/**
 * main - Entry point of the program
 *
 * Description: This function prints the message "and that piece of art is useful" - Dora Korpar, 2015-10-19”
*
 * Return: Always 0 (success)
 */

int main(void)
{
    write(2,"and that piece of art is useful" - Dora Korpar, 2015-10-19\n",59);

    return (1);
}


