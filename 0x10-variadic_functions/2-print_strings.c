#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: separator
 * @n: number of string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strPtr;

	va_start(strPtr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strPtr, char *);
		if (!str)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < n - 1 && separator)
		{
			printf("%s", separator);
			continue;
		}
	}
	va_end(strPtr);
	printf("\n");
}
