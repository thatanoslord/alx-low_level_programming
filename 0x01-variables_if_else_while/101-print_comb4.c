#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits
 * Numbers must be separated by ', ', and only the smallest combination is printed
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hundreds, tens, units;

	for (hundreds = 0; hundreds <= 7; hundreds++) /* Loop for hundreds place (0-7) */
	{
		for (tens = hundreds + 1; tens <= 8; tens++) /* Loop for tens place (hundreds+1 to 8) */
		{
			for (units = tens + 1; units <= 9; units++) /* Loop for units place (tens+1 to 9) */
			{
				putchar(hundreds + '0'); /* Print hundreds place digit */
				putchar(tens + '0');     /* Print tens place digit */
				putchar(units + '0');    /* Print units place digit */

				if (hundreds != 7 || tens != 8 || units != 9) /* Ensure no comma after the last triplet */
				{
					putchar(','); /* Print comma */
					putchar(' '); /* Print space */
				}
			}
		}
	}

	putchar('\n'); /* Print newline */

	return (0);
}
