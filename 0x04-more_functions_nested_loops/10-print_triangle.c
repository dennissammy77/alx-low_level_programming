#include "main.h"

/**
 * print_triangle - Entry point.
 *
 * description - prints a triangle.
 * @size - is the size of the triangle.
 */
void print_triangle(int size)
{
	int hash, index;
	
	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (index = size - hash; index > 0; index--)
			{
				_putchar(" ");
			}
			for (index = ; index < hash; index++)
			{
				_putchar("#");
			}
			if (hash != size)
			{
				_putchar("\n");
			}
		}
	}
	_putchar("\n");
}
