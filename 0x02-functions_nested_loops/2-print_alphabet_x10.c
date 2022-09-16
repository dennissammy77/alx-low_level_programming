#include "main.h"

/**
 * main - Entry point,
 *
 * description - prints alpahbets in lowercase 10 times followed by a new line,
 *
 */
void print_alphabet_x10(void)
{
	char ch;
	int n;

	for (n = 0; n <= 10; n++)
		for ( ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
	_putchar('\n');
}
