#include "main.h"

/**
 *  * print_line - Print line dependent on the integer n.
 *   * @n : The number of '_' characters to use
 *    * Return: Void.
 *     */

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
