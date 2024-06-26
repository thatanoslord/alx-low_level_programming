#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @c: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int c)
{
    int abs_val;

    if (c < 0)
        abs_val = c * -1;
    else
        abs_val = c;

    return (abs_val);
}
