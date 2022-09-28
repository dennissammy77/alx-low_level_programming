#include "main.h"

/**
 * _sqrt - sqrt_recursion.
 * @n: integer.
 * @i: int.
 * Return : _sqrt.
 */
int _sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (1);
	}
	if ((i * i) == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - retuens the natural square root of a number.
 * @n: integer.
 * Return: _sqrt of int.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
