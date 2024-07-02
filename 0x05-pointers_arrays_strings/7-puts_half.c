#include "main.h"
/**
* puts_half - prints second half of string
* @str: string pointer
*/

void puts_half(char *str)
{
	int i;

	int n = strlen(str), half = n % 2 ? (n + 1) / 2 : n / 2;

	for (i = half; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
