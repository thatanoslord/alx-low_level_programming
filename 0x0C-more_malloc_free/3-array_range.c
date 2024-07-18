#include "main.h"
/**
 * array_range - creates array from min to max
 * @min: start
 * @max: end
 * Return: pointer to first postion
 */

int *array_range(int min, int max)
{
	int i, len;
	int *res;

	if (min > max)
		return (NULL);

	len = (max + 1) - min;

	res = malloc(sizeof(int) * len);

	if (res == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		res[i] = min + i;

	return (res);
}
