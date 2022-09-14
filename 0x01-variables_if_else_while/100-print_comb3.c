#include <stdio.h>

/**
 * main - Entry point.
 *
 * description - prints all possible different combinations of two digits.
 *
 * Return - Always(0) success.
 *
 */

int main(void)
{
	int n,x;

	for ( n= 0; n < 9; n++)
		for ( x = n + 1; x < 10; x++)
			putchar((n % 10) + '0');
			putchar((x % 10) + '0');

			putchar(',');
			putchar(' ');
	
	putchar('\n');

	return (0);
}
