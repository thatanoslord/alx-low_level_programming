#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int tens, units;

    for (tens = 0; tens <= 8; tens++)
    {
        for (units = tens + 1; units <= 9; units++)
        {
            putchar(tens + '0');    // Convert tens digit to character and print
            putchar(units + '0');   // Convert units digit to character and print

            if (tens < 8 || units < 9)
            {
                putchar(',');       // Print comma
                putchar(' ');       // Print space
            }
        }
    }

    putchar('\n');  // Print newline at the end

    return (0);
}

