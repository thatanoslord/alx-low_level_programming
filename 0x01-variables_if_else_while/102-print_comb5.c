#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 * Numbers are printed in ascending order and formatted as "00 01, 00 02, ...".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1_tens, n1_units, n2_tens, n2_units;

	for (n1_tens = 0; n1_tens <= 9; n1_tens++)
	{
		for (n1_units = 0; n1_units <= 9; n1_units++)
		{
			for (n2_tens = n1_tens; n2_tens <= 9; n2_tens++)
			{
				int start_units = (n2_tens == n1_tens) ? n1_units + 1 : 0;

				for (n2_units = start_units; n2_units <= 9; n2_units++)
				{
					putchar(n1_tens + '0');
					putchar(n1_units + '0');
					putchar(' ');
					putchar(n2_tens + '0');
					putchar(n2_units + '0');

					if (!(n1_tens == 9 && n1_units == 8 && n2_tens == 9 && n2_units == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
