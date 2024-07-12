#include <stdio.h>
#include <ctype.h>
/**
 * _islower - checks if letter is lowercase
 * @c: character input
 * Return: 0 if not lowercase, 1 if lowercase
 */
int _islower(int c)
{
	char character = c;

	if (character <= 'z' && character >= 'a')
		return (1);
	else
		return (0);
}
