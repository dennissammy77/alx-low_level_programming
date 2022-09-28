#include "main.h"

/**
 * _strlen_recursion  - size of string.
 * @s: pointer to string.
 * Return: recursion.
 */
int _str_lenrecursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * pfunc - palindrome.
 * @s: pointer to string.
 * @i: position of string.
 * Return : bool. 
 */
int pfunc(char *s,int i)
{
	if (i < 1)
	{
		return (1);
	}

	if (*s == *(s + i))
	{
		return (pfunc(s + 1,i - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome.
 * @s: pointer to string.
 * Return : recursion.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	return (pfunc(s, len - 1));
}
