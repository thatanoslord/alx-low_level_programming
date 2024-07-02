#include "main.h"
/**
*swap_int - swaps integers
* @a: first int
* @b: second int
*/

void swap_int(int *a, int *b)
{
		int tmp;

		tmp = *a;
		*a = *b;
		*b = tmp;
}
