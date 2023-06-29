#include "main.h"

/**
 * *rot13- rot13.
 * @s: pointer
 * Return: return s
 */

char *rot13(char *s)
{
	char input[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, ii;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; ii < 54; ii++)
		{
			if (((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A'))
					&& s[i] == input[ii])
			{
				s[i] = output[ii];
				break;
			}
		}
	}
	return (s);
}
