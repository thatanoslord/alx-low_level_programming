#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed
 * to by s with the constant byte b
 * @s: character pointer
 * @b: character to fill the memory with
 * @n: memory space to be filled
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
