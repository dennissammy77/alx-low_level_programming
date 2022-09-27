#include "main.h"
/**
 * _strpbrk - function that searches a string for a any set of bytes.
 * @*s: pointer.
 * @*accept: pointer.
 * Return - pointer to byte in s.
 */
char *_strpbrk(char *s,char *accept)
{
	int i;
	while (*s)
	{
		for (i = 0;accept[i];i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
			s++;
		}
	}
	return ('\0');
}
