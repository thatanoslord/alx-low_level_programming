#include "main.h"
/**
 * _pow_recursion - desc
 * @x: base
 * @y: power
 * Return: Result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
