#include "main.h"
#include "2-strlen.c"
/**
 *  * rev_string - reverses a string
 *   * @s: string pointer
 *    */

void rev_string(char *s)
{
		int i, n = _strlen(s);

			char temp;

				for (i = 0; i < n / 2; i++)
						{
									temp = s[i];
											s[i] = s[n - i - 1];
													s[n - i - 1] = temp;
														}
}
