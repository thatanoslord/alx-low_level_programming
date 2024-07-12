#include "main.h"
/**
 * _strncat - concat using n bytes from src
 * @dest: end result
 * @src: input string
 * @n: bytes to be used from src
 * Return: concated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int destLen = strlen(dest), i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[destLen++] = src[i];
	}
	dest[destLen] = '\0';
	return (dest);
}
