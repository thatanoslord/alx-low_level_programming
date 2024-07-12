#include "main.h"
/**
 * main - main function
 * @argc: argument count
 * @argv: argument values
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int total, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]);

	while (total > 0)
	{
		change++;
		if (total - 25 >= 0)
		{
			total -= 25;
			continue;
		}
		if (total - 10 >= 0)
		{
			total -= 10;
			continue;
		}
		if (total - 5 >= 0)
		{
			total -= 5;
			continue;
		}
		if (total - 2 >= 0)
		{
			total -= 2;
			continue;
		}
		total--;
	}

	printf("%d\n", change);
	return (0);
}
