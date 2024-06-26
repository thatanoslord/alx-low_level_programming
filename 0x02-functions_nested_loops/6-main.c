#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _abs(-1);
	_putchar(r + '0');
	r = _abs(0);
	_putchar(r + '0');
	r = _abs(98);
	_putchar(r + '0');
	r = _abs(-1024);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

