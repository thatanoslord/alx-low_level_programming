#include "main.h"
/**
 * argstostr - turns arguments to a string
 * @ac: argument count
 * @av: argument values
 * Return: concatenated arguments
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, totalLen = 0, counter = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		totalLen += strlen(av[i]) + 1;
	}

	str = malloc(totalLen * sizeof(*str) + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[counter++] = av[i][j];
		}
		str[counter++] = '\n';
	}

	str[counter] = '\0';
	return (str);
}
