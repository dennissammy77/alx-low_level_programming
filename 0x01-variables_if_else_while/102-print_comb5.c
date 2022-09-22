#include <stdio.h>

/**
 * main - Entry point.
 *
 * description - prints all possible combinations of two two-digit numbers.
 *
 * Return - Always(0) success.
 *
 */
int main(void)
{
	int n, x;

	for (n = 0; n <= 98; n++)
	{
		for (x = n + 1; x < 99; x++)
		{
			putchar((n /10) + '0');
			putchar((n % 10) +'0');
			putchar(' ');
			putchar((x / 2) + '0');
			putchar((x % 10) + '0');

			if ( n == 98 && x == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
