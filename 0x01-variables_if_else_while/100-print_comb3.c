#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens, units;

	for (tens = 0; tens <= 8; tens++) /* Loop for tens place (0-8) */
	{
		for (units = tens + 1; units <= 9; units++) /* Loop for units place (tens+1 to 9) */
		{
			putchar(tens + '0'); /* Print tens place digit */
			putchar(units + '0'); /* Print units place digit */

			if (tens < 8 || units < 9) /* Ensure no comma after the last pair */
			{
				putchar(','); /* Print comma */
				putchar(' '); /* Print space */
			}
		}
	}

	putchar('\n'); /* Print newline */

	return (0);
}
