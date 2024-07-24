#include "function_pointers.h"
/**
 * int_index - searched for an integer
 * @array: array ptr
 * @size: array size
 * @cmp: comparison scheme
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size == 0 || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
