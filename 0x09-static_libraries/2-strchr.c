#include "main.h"
/**
 * _strchr - find first occurrence of c
 * @s: string ptr
 * @c: character to compare
 * Return: character pointer
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (c == '\0')
		return (&s[i]);
	return (NULL);
}
