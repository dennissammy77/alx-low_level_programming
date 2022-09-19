#include "main.h"

/**
 * print_square - Entry point.
 *
 * description - prints a square.
 * @size is size of the square.
 */

void print_square(int size)
{
	int len, width;

	if (size > 0)
	{
		for (len = 0; len < size; len++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar("#");
			}
			if (len == size - 1)
			{
				continue;
			}

			_putchar("\n");
		}
	}
	_putchar("\n");
}
