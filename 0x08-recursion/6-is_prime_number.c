#include "main.h"
/**
 * prime - makes possible evaluation of the prime number
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: 1 or 0.
 */

int prime(int a, int b)
{
	if (b == a)
		return (1);
	else if (a % b == 0)
		return (0);

	return (prime(a, b + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
