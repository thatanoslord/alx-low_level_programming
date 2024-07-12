#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	unsigned long int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count++);
}
