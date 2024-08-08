#include "main.h"
/*
* flip_bits - returns the number of attemps to turn from n to m
* @n: first num
* @m: second num
* Return: number of attempts
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, count;

	count = n ^ m;

	while (count > 0)
	{
	if (count & 1)
	mask++;
	count >>= 1;
	}
	return (mask);
}
