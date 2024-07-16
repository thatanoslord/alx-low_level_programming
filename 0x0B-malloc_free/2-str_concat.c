#include "main.h"
/**
 * str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: Concatenated string pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1), len2 = strlen(s2);

	concat = malloc((sizeof(*s1) * len1) + (len2 * sizeof(*s2)) + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < len2; j++)
		concat[i++] = s2[j];

	concat[i] = '\0';

	return (concat);
}
