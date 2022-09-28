#include "main.h"
/**
 * _sqrt_recursion - retuens the natural square root of a number.
 * @n: integer.
 * Return: int.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n,1));
}

/** 
 * _sqrt - sqrt_recursion.
 * @n: integer.
 * @x: int.
 * Return : sqrt.
 */
int _sqrt(int n, int x)
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
