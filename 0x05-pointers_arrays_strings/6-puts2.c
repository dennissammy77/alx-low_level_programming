#include "main.h"

/**
 * puts2 - prints every other character in a astring.
 * @str: input string.
 */
void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[i++])
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
