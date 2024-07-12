#include "main.h"
/**
 * _isupper - checks if letter is upper case
 * @c: input integer
 * Return: 1 if uppercase, 0 if not
 */
int _isupper(int c)
{
	char character = c;

	if (character <= 'Z' && character >= 'A')
		return (1);
	else
		return (0);
}
