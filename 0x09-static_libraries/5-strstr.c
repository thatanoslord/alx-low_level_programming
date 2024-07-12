#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: pointer string
 * @needle: pointer substring
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, counter;

	for (; i != haystack[i]; i++)
	{
		counter = 0;
		while (haystack[i + counter] != '\0' && needle[counter] != '\0')
		{
			if (haystack[i + counter] == needle[counter])
				counter++;
			else
				break;
		}
		if (needle[counter] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
