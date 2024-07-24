#include "3-calc.h"

/**
 * main - Performs simple operations based on user input
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success, 98 on incorrect number of arguments,
 * 99 on invalid operator, 100 on division by zero
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", operation(num1, num2));
	return (0);
}

