#include "main.h"
/*
* clear_bit - sets a bit to 0 at given index
* @n: num
* @index: position
* Return: 1 if success, -1 if fail
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
