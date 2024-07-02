#include "main.h"
/**
 * _strcpy - string copy
 * @dest: destination to be pasted
 * @src: source to be copied
 * Return: destination string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	int n = strlen(src);

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
