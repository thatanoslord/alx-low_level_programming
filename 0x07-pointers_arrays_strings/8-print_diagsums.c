#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 *  of a square matrix of integers.
 * @a: int pointer
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int rightMod = size + 1, leftMod = size - 1;

	for (i = 0; i < size * size; i++)
	{

		if (!(i % rightMod))
			sum += a[i];
	}
	printf("%d, ", sum);

	sum = 0;
	for (i = 0; i < size * size; i++)
	{
		/*second condition to stop at first index of the last row*/
		if (!(i % leftMod) && i != (size * size) - 1 && i != 0)
			sum += a[i];
	}
	printf("%d\n", sum);
}
