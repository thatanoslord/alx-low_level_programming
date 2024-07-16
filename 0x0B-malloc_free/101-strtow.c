#include "main.h"
/**
 * word_counter - counts the number of words in a string
 * @s: string
 * Return: word count
 */

int word_counter(char *s)
{
	int flag = 0, i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (!flag)
		{
			flag = 1;
			count++;
		}
	}
	return (count);
}

/**
 * strtow - turns an a string into an array of string
 * @str: string pointer
 * Return: double pointer
 */

char **strtow(char *str)
{
	char **res, *tmp;
	int words, i, strLen, wordCount = 0, start, end, resItr = 0;

	if (str == NULL)
		return (NULL);
	strLen = strlen(str);
	words = word_counter(str);
	if (words == 0)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (res == NULL)
		return (NULL);

	for (i = 0; i <= strLen; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (wordCount)
			{
				end = i;
				tmp = malloc(sizeof(**res) * (wordCount + 1));
				if (tmp == NULL)
					return (NULL);

				while (start < end)
				{
					*tmp++ = str[start++];
				}
				*tmp = '\0';
				res[resItr++] = tmp - wordCount;
				wordCount = 0;
			}
		}
		else if (wordCount++ == 0)
			start = i;
	}
	res[resItr] = NULL;
	return (res);
}
