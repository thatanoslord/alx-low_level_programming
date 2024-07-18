#include "main.h"
/**
 * malloc_checked - Returns a pointer to the allocated memory
 * @b: size of memory
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
