#include "main.h"

/**
 * more_numbers - Entry point.
 *
 * description - prints 10 times from 0 to 14.
 */

void more_numbers(void)
{
	int num, i;

	for (num = 0; num <= 9; num++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i % 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
