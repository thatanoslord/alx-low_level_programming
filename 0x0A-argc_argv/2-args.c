
#include "main.h"
/**
 * main - main function
 * @argc: argument count
 * @argv: argument values
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i++]);
	}
	return (0);
}
