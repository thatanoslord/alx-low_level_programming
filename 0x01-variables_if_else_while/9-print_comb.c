#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0'); /* Print the digit as a character */

		if (digit < 9)
		{
			putchar(','); /* Print comma */
			putchar(' '); /* Print space */
		}
	}

	putchar('\n'); /* Print newline */

	return (0);
}
