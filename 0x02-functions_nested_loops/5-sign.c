#include "main.h"

/**
 * main - entry point,
 *
 * description - prints the sign of a number,
 *
 * Return: 1 and prints + if n is > 0 || 0 and prints 0 if n = 0 || -1 and prints - if n < 0.
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
		_putchar('+');
	else if (n = 0)
		return (0);
		_putchar('0');
	else 
		_putchar('-');
}
