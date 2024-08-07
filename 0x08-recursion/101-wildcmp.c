#include "main.h"
/**
 * wildcmp - compares 2 identical strings with wild cards in consideration
 * @s1: string 1
 * @s2: string 2
 * Return: 0 or 1
 */

int wildcmp(char *s1, char *s2)
{

	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s2 == '*')
	{
		if (*(s2 + 1) != '\0' && *s1 == '\0')
			return (0);
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}
	return (0);
}
