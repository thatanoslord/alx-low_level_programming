#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens, units;

	for (tens = 0; tens <= 8; tens++)
	{
		for (units = tens + 1; units <= 9; units++)
		{
			putchar(tens + '0');
			putchar(units + '0');

			if (tens != 8 || units != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
