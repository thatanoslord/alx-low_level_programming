#include "main.h"
/**
 * _strlen_recursion - returns string length
 * @s: string pointer
 * Return: Count
 */

int _strlen_recursion(char *s)
{
	int count;

	if (*s == '\0')
		return (0);
	count = _strlen_recursion(s + 1) + 1;
	return (count);
}

/**
 * check_palindrome - checks palindrome or not
 * @s: string pointer
 * @l: length
 *
 * Return: 0 or 1.
 */

int check_palindrome(char *s, int l)
{
	if (*s != *(s + l))
		return (0);
	else if (*s == '\0')
		return (1);

	return (check_palindrome(s + 1, l - 2));
}
/**
 * is_palindrome - checks if a string is palindrome or not
 * @s: string pointer
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (check_palindrome(s, length - 1));
}
