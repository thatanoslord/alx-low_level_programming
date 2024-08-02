#include <stdio.h>
/**
 * first - function that runs first
 */

void __attribute__((constructor)) first()
{
	printf("You're beat! and yet");
	printf(", you must allow");
	printf(",\nI bore my house upon my back!\n");
}
