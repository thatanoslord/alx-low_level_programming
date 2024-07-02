#include "main.h"
#include "2-strlen.c"
/**
* print_rev - prints reversed string
* @s: string pointer
*/

void print_rev(char *s)
{
		int i;

		int n = _strlen(s) - 1;

		for (i = n; i >= 0; i--)
		{
		_putchar(*(s + i));
		}
		_putchar('\n');
}
