#include "main.h"

/**
 * _sqrt - makes possible evaluation of the square root of the number
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: b or -1.
 */

int _sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);

	return (_sqrt(a, b + 1));
}

/**
 * _sqrt_recursion - square root
 * @n: number
 * Return: sqrt number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
