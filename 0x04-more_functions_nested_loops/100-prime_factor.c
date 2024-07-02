#include <stdio.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a given number
 * @n: The number to find the largest prime factor for
 *
 * Return: The largest prime factor of the number
 */
long largest_prime_factor(long n)
{
    long largest_prime = -1;
    int i;

    /* Check for number of 2s */
    while (n % 2 == 0) {
        largest_prime = 2;
        n /= 2;
    }

    /* n must be odd at this point, so we can skip even numbers */
    for (i = 3; i <= n; i += 2) {
        while (n % i == 0) {
            largest_prime = i;
            n /= i;
        }
    }

    return largest_prime;
}

int main(void)
{
    long number = 612852475143;
    long largest_prime = largest_prime_factor(number);

    printf("%ld\n", largest_prime);

    return 0;
}
