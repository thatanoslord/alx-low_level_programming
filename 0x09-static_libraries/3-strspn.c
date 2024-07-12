#include "main.h"
/**
 * _strspn - number of bytes in the initial segment of s
 *  which consist only of bytes from accept
 * @s: string pointer
 * @accept: string pointer
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (count);
}
