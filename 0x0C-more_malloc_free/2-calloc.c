#include "main.h"
/**
 * _calloc - stores `nmemb` elements of `size` bytes into a pointer
 * @nmemb: number of members
 * @size: size of each member
 * Return: pointer of specified type
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *res;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	res = malloc(nmemb * size);

	if (res == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		((char *)res)[i] = 0;
	}

	return (res);
}
