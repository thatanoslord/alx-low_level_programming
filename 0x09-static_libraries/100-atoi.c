#include "main.h"
/**
 * _atoi - turns string into an integer
 * @s: string pointer
 * Return: Extracted numbers from string
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int res = 0;

	do
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			res = (res * 10) + (*s - '0');
		}
		else if (res > 0)
		{
			break;
		}
	} while (*s++);
	return (res * sign);
}
