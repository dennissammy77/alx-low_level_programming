#include "main.h"

/**
 * _strcmp - coompares two strings.
 * @s1: first string.
 * @s2: secong string.
 * Return: 0 if  s1 == s2, otherwise.
 */
int _strmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
