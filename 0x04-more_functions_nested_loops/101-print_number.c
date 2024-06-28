#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int divisor = 1;
	int digit;
	int negative = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		negative = 1;
	}

	/* Find the divisor to get the highest place value */
	while (n / divisor >= 10)
		divisor *= 10;

	/* Extract digits and print them */
	while (divisor != 0)
	{
		digit = n / divisor;
		_putchar(digit + '0'); /* Convert digit to character */
		n %= divisor;          /* Remove printed digit from n */
		divisor /= 10;         /* Move to next lower place value */
	}

	/* If the number was negative, we already printed '-' */
	if (negative)
		return;
	/* Edge case: if n was 0, we still need to print '0' */
	if (n == 0)
		_putchar('0');
}
