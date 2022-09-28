#include "main.h"

/**
 * divisors - number is prime.
 * @n: integer.
 * @x: integer.
 * Return: bool.
 */
int divisor(int n,int x)
{
	if (x % n == 0)
	{
		return (0);
	}
	else if
	{
		return (divisors(n + 2, x));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - returns if an integer is a prime number.
 * @n: integer.
 * Return : 0 if not an integer otherwise 1.
 */

int is_prime_numbers(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisors(3,n));
	}
}
