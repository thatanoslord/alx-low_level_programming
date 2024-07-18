#include "main.h"
/**
 * _realloc - reallocates the pointer with the new space
 * @ptr: ptr to copy
 * @old_size: old space
 * @new_size: new space
 * Return: a new pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *res;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	res = malloc(new_size);

	if (!res)
		return (NULL);

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			((char *)res)[i] = ((char *)ptr)[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			((char *)res)[i] = ((char *)ptr)[i];
	}

	free(ptr);
	return (res);
}
