#include "main.h"
/**
 * print_buffer - prints a buffer
 * @b: string pointer
 * @size: size of string
 */
void print_buffer(char *b, int size)
{
	int hex = 0, columnPosition = 0, rowSize = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (; hex < size; hex += 10)
	{
		printf("%08x: ", hex);
		rowSize = size - hex < 10 ? size - hex : 10;
		for (columnPosition = 0; columnPosition < 10; columnPosition++)
		{
			if (columnPosition < rowSize)
				printf("%02x", b[hex + columnPosition]);
			else
				printf("  ");
			if (columnPosition % 2)
				printf(" ");
		}

		for (columnPosition = 0; columnPosition < rowSize; columnPosition++)
		{
			char character = b[hex + columnPosition];

			if (character < ' ' || character > '~')
			{
				character = '.';
			}
			printf("%c", character);
		}
		printf("\n");
	}
}
