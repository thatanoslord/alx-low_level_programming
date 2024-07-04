#include "main.h"
/**
 * leet - leet
 * @s: input string
 * Return: encoded string
 */

char *
leet(char *s)
{
	int i, j;

	char vowels[20] = "a4A4e3E3o0O0t7T7l1L1";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; vowels[j] != '\0'; j++)
		{
			if (s[i] == vowels[j] && !(s[i] >= '0' && s[i] <= '9'))
			{
				s[i] = vowels[j + 1];
			}
		}
	}
	return (s);
}
