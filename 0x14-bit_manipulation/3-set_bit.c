#include "main.h"
/*
* set_bit - sets a bit at given index
* @n:decimal num
* @index: position
* Return: 1 if success, -1 if fail
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	return (-1);
	*n = *n | (1 << index);
	return (1);
}
