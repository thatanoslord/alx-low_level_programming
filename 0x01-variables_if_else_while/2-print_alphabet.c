#include <stdio.h>

/**
 * main - Prints the alphabetic
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n'); /* Print newline after the alphabet */

	return (0);
}
