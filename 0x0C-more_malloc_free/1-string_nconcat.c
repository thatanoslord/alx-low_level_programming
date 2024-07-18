#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of characters to concat from s2
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	int s1Len, s2Len, resItr = 0, i, num;

	num = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);

	s2Len = strlen(s2), s1Len = strlen(s1);
	if (num >= s2Len)
		num = s2Len;

	res = malloc((s1Len + 1) + n);
	if (res == NULL)
		return (NULL);

	for (i = 0; i < s1Len; i++)
		res[resItr++] = s1[i];

	for (i = 0; i < num; i++)
		res[resItr++] = s2[i];

	res[resItr] = '\0';

	return (res);
}
