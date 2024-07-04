#include "main.h"
#include <ctype.h>
/**
 * cap_string - Capitalize all words of a string
 * @s: string
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i, j;

	int newWord = 1;

	char capArr[13] = {'\n', '\t', ' ', '.', ',', ';', ',', '!', '?', '(',
										 ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (newWord
		&& ((s[i] >= 'a' && s[i] <= 'z')
		|| (s[i] >= 'A' && s[i] <= 'Z')))
		{
			s[i] = toupper(s[i]);
			newWord = 0;
			continue;
		}
		if (s[i] >= '0' && s[i] <= '9')
			newWord = 0;

		for (j = 0; j < 13; j++)
			if (s[i] == capArr[j])
			{
				newWord = 1;
				break;
			}
	}
	return (s);
}
