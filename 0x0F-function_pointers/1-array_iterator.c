#include "function_pointers.h"
/**
 * array_iterator - iterates an array an applies `action`
 * @array: array ptr
 * @size: array size
 * @action: func
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || size == 0 || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
