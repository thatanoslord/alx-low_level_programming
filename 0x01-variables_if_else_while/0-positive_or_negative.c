#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints if number is positive, zero or nigative
 * Return: Always (Success)
 */
int main(void)
{
	int n;

	srand(time(0)); /* Seed for random number generation */

	n = rand() - (RAND_MAX / 2); /* Assign a random number to n */

	printf("%d is ", n);

	if (n > 0)
	{
		printf("positive\n");
	}
	else if (n == 0)
	{
		printf("zero\n");
	}
	else
	{
		printf("negative\n");
	}

	return (0);
}
