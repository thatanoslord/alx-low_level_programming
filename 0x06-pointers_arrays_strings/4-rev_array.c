#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: array pointer
 * @n: array size
 */

void reverse_array(int *a, int n)
{
	int end = n - 1, start = 0, temp;

	while (start < n / 2)
	{
		temp = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = temp;
		start++;
		end--;
	}
}
