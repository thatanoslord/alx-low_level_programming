#include "main.h"
/*
* get_bit - returns bit at a given position
* @n: number
* @index: index of bit
* Return: value of bit at given index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int rightShifts;

	if (index > sizeof(n) * 8)
	return (-1);

	rightShifts = n >> index;

	return (rightShifts & 1);
}
