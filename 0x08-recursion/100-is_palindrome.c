#include "main.h"

/**
 * _str_len_recursion  - size of string.
 * @s: pointer to string.
 * Return: recursion.
 */
int _str_len_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _str_len_recursion(++s));
}

/**
 * pfunc - palindrome.
 * @s: pointer to string.
 * @i: position of string.
 * Return : 0 success - pfunc.
 */
int pfunc(char *s, int i)
{
	if (i < 1)
	{
		return (1);
	}
	if (*s == *(s + i))
	{
		return (pfunc(s + 1, i - 2));
	}
	return (0);
}
/**
 * is_palindrome - palindrome.
 * @s: pointer to string.
 * Return : pfunc && is_palindrome.
 */
int is_palindrome(char *s)
{
	int len = _str_len_recursion(s);

	return (pfunc(s, len - 1));
}

