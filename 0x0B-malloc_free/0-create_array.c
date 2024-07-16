#include "main.h"
/**
 * create_array - creates an array
 * @size: size of array
 * @c: character to fill
 * Return: NULL or pointer
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(c) * size);

	if (p == NULL)
	{
		return (p);
	}

	while (size--)
	{
		p[i++] = c;
	}
	p[i] = '\0';

	return (p);
}
