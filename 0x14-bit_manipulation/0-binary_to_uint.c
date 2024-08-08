#include "main.h"
/*
* binary_to_uint - turns a binary to an unsigned int
* @b: binary
* Return: decimal value
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, res = 0;
	int i;

	if (!b)
	return (0);

	for (i = 0; b[i]; i++)
	{
	if (b[i] != '0' && b[i] != '1')
	return (0);
	}

	for (base = 1, i--; i >= 0; i--, base *= 2)
	{
	if (b[i] == '1')
	res += base;
	}
	
	return (res);
}
