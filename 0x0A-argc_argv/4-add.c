
#include "main.h"
/**
 * main - main function
 * @argc: argument count
 * @argv: argument values
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int res = 0, i, num;
	unsigned long j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		res += num;
	}

	printf("%d\n", res);
	return (0);
}
