#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: separator
 * @n: numbers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list numPtr;

	va_start(numPtr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numPtr, unsigned int));
		if (i < n - 1 && separator)
		{
			printf("%s", separator);
			continue;
		}
	}
	va_end(numPtr);
	printf("\n");
}
