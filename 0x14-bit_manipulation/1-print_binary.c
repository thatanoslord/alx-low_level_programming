#include "main.h"
/*
* print_binary - prints a binary number
* @n: decimal number
*/

void print_binary(unsigned long int n)
{
		unsigned long int temp;
			int i;

				if (n == 0)
						{
									printf("0");
											return;
												}

					for (temp = n, i = 0; (temp >>= 1) > 0; i++)
								;

						for (; i >= 0; i--)
								{
											if ((n >> i) & 1)
															printf("1");
													else
																	printf("0");
														}
}
