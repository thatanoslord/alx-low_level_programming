#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character to check
 * Return: 1 if lowercase character, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
