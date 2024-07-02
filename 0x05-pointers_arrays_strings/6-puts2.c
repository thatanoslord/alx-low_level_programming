#include "main.h"
/**
* puts2 - prints every other character
* @str: string pointer
*/

void puts2(char *str)
{
		int i;

		int n = strlen(str);

		for (i = 0; i < n; i++)
		{
		if (i % 2 == 0)
		{	
		_putchar(str[i]);
		}
		}
		_putchar('\n');
}
