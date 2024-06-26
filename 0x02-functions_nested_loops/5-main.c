#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = print_sign(98);
	_putchar(r + '0');
	r = print_sign(0);
	_putchar(r + '0');
	r = print_sign(0xff);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
