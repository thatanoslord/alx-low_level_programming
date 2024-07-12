#include <ctype.h>
/**
 * _isalpha - checks if  character is alphabetical
 * @c: character input
 * Return: 0 for false, 1 for true
 */
int _isalpha(int c)
{
	char character = c;

	if ((character <= 'z' && character >= 'a') ||
			(character <= 'Z' && character >= 'A'))
		return (1);
	return (0);
}
