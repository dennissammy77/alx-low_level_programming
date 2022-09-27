#include "main.h"

/**
 * _strchr - functions that locate a character in a string.
 * @*s: string.
 * @c: charachter to be located
 * Return - s if c occur otherwise NULL.
 */
char *_strchr(char *s,char c)
{
	int i;

	for (i = 0;s[i] >= '\0';i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
