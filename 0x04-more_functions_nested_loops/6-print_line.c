#include "main.h"

/**
 * print_line - Entry point.
 *
 * description - draws a straight line.
 * @n is an integer.
 *
 */
void print_line(int n)
{
	int length;
	
	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
