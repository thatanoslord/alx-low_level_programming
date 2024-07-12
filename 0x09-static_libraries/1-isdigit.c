#include "main.h"
/**
 * _isdigit - checks if a character is a digit
 * @c: input integer
 * Return: 0 if not digit, 1 if a digit
 */
int _isdigit(int c)
{
	char chrcter = c;

	if (chrcter <= '9' && chrcter >= '0')
		return (1);
	else
		return (0);
}
