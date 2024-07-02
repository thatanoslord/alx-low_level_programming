#include "main.h"

/**
 * print_square - Prints a square of '#' characters
 * @size: Size of the square
 *
 * Description: If size is 0 or less, prints only a newline.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int row, col;

		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

