#include <stdio.h>

/**
 * main - Entry point.
 *
 * description - prints all possible different combinations of three digits.
 *
 * Return - Always(0) success.
 *
 */

int main(void)
{
	int n,x,z;

	for ( n = 0; n < 8; n++)
		for( x = n+1 ; x < 9; x++)
			for( z = x+1; z < 10; z++)
				putchar((n % 10) + '0');
				putchar((x % 10) + '0');
				putchar((z % 10) + '0');

				if (n == 7 && x == 8 && z == 9)
					continue;

				putchar(',');
				putchar(' ');
	putchar('\n');

	return (0);
}
