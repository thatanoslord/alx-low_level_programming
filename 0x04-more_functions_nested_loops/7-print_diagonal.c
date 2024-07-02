#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: Number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			/* Print spaces before the diagonal */
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			/* Print the diagonal */
			_putchar('\\');
			_putchar('\n');
		}
	}
}

