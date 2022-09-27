#include "main.h"

/**
 * *_memset - function that fills memory a byte.
 * @*s:pointer to memory .
 * @b: contant byte.
 * @n: bytes to be filled.
 * Returns a pointer.
 */
char *_memset(char *s,char b,unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n;i++)
	{
		s[i] = b;
	}
	return (s);
}
