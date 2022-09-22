#include <stdio.h>

/**
 * main - prints single digit numbers of bae 10 starting from 0.
 *
 * Return: Always(0) success.
 *
 */

int main(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
		putchar((n % 10) + '0');

	putchar('\n');
	return (0);
}
