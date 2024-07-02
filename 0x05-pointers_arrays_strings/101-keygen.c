#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: Always 0
 */

int main(void)
{
	int random;
	/*
	 * Value generated from 101-crackme that the code compares the with
	 * the code works as follows:
	 * it takes the ascii value of each integer
	 * and sum the ascii value to check if it 's equal to 2772,
	 * if it' s equal then password succeeds
	 */
	int total = 2772;

	/*
	 *using srand to seed the rand() function
	 *with the number of seconds since 1 1 1970
	 */

	srand(time(NULL));
	/*
	 * I want to ensure that the loop runs enough times
	 *to make the total less than 126
	 */
	while (total > 125)
	{
		/* generate random ascii character*/
		random = (rand() % 126) + 1;
		printf("%c", random);
		total -= random;
		if (total < 125)
		{
			printf("%c", total);
			break;
		}
	}

	return (0);
}
