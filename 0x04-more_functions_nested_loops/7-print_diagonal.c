#include "main.h"

/**
 * print_diagonal - Entry point.
 *
 * description - draws a diagonal line.
 *@n number of times the character.
 */
void print_diagonal(int n)
{
	int len;

	if (n > 0)
	{
		for  (len = 0; len < n; len++)
		{
			_putchar('\');
		}
	}
	_putchar('\n');
}
