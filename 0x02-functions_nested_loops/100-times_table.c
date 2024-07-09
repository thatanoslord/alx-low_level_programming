#include "main.h"
#include <stdio.h>

/**
* print_times_table - Prints the n times table, starting from 0
* @n: The number defining the size of the times table
*
* Description: Prints the n times table, starting from 0, up to n times n.
* If n is greater than 15 or less than 0, nothing is printed.
* Each value should be formatted to three spaces.
*/

void print_times_table(int n)
{
if (n < 0 || n > 15)
return;

int i, j, result;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
result = i * j;
if (j == 0)
printf("%3d", result);
else
printf(", %3d", result);
}
printf("\n");
}
}
