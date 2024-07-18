#include "main.h"
/**
 * hasLetter - checks if the argv has no letters
 * @av: arguments values
 * Return: 0 or 1
 */

int hasLetter(char **av)
{
	int i, j;

	for (i = 1; i < 3; i++)
		for (j = 0; av[i][j]; j++)
			if (av[i][j] < '0' || av[i][j] > '0')
				return (1);
	return (0);
}

/**
 * fillWith0 - fills a ptr with 0
 * @p: pointer
 * @len: ptr length
 */

void fillWith0(char *p, int len)
{
	int i;

	for (i = 0; i < len; i++)
		p[i] = '0';

	p[i] = '\0';
}

/**
 * mul - multiplies a char with a string and places the answer into dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start addition
 *
 * Return: pointer to dest, or NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int j, k, mul, mulRem, add, addRem;

	mulRem = addRem = 0;
	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
		mul = (n - '0') * (num[j] - '0') + mulRem;
		mulRem = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + addRem;
		addRem = add / 10;
		dest[k] = add % 10 + '0';
	}
	for (addRem += mulRem; k >= 0 && addRem; k--)
	{
		add = (dest[k] - '0') + addRem;
		addRem = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (addRem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg values
 * Return: 0 or exit code 98
 */

int main(int argc, char **argv)
{
	char *err = "Error\n", *res;
	int arg1Len, arg2Len, totalLen;

	if (argc != 3 || hasLetter(argv))
	{
		printf("%s", err);
		exit(98);
	}

	arg1Len = strlen(argv[1]), arg2Len = strlen(argv[2]);

	totalLen = arg1Len + arg2Len;

	res = malloc(sizeof(char) * (totalLen + 1));
	if (!res)
	{
		printf("%s", err);
		exit(98);
	}
	fillWith0(res, totalLen);

	return 0;
}
