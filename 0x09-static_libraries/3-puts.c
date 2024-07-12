#include "main.h"
/**
 * _puts - prints a string
 * @str: string pointer
 */

void _puts(char *str)
{
	unsigned long int count = 0;

	while (*(str + count) != '\0')
	{
		_putchar(str[count++]);
	}
	_putchar('\n');
}
