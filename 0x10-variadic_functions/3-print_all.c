#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints all data types
 * @format: format of data
 */

void print_all(const char *const format, ...)
{
	unsigned int count;
	char *s, *sep;
	va_list inputPtr;

	va_start(inputPtr, format);

	count = 0;
	sep = "";

	while (format && format[count])
	{
		switch (format[count])
		{
		case 'c':
			printf("%s%c", sep, va_arg(inputPtr, int));
			break;
		case 'i':
			printf("%s%d", sep, va_arg(inputPtr, int));
			break;
		case 'f':
			printf("%s%f", sep, va_arg(inputPtr, double));
			break;
		case 's':
			s = va_arg(inputPtr, char *);
			if (!s)
				s = "(nil)";
			printf("%s%s", sep, s);
			break;
		default:
			count++;
			continue;
		}

		sep = ", ";
		count++;
	}
	va_end(inputPtr);
	printf("\n");
}
