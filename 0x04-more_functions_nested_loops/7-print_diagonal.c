#include "main.h"

/**
 * print_diagonal - Entry point.
 *
 * description - draws a diagonal line.
 *@n number of times the character.
 */
void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for  (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
			{
				_putchar(" ");
			}
		
			_putchar("\\");

			if (len != n - 1)
			{
				_putchar("\n");
			}		
		}
	}
	_putchar("\n");
}