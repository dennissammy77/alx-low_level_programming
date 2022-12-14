#include "main.h"

/**
 * divisors - number is prime.
 * @n: integer.
 * @x: integer.
 * Return: divisor.
 */
int divisor(int n, int x)
{
	if ((x % n) == 0)
	{
		return (0);
	}
	else if ((x / 2) > n)
	{
		return (divisor((n + 2), x));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - returns if an integer is a prime number.
 * @n: integer.
 * Return : 0 if not an integer otherwise 1 && is_prime_number.
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisor(3, n));
	}
}
