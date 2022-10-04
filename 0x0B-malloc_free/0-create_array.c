#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of char and initializes a specific char.
 * @size:size of memory to print.
 * @c:stored char.
 * Return: Null of size is 0 . or pointer of array.
 */
char *create_array(unsigned int size,char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	cr = malloc(sizeof(c) * size);
	
	if (cr == NULL)
	{
		return (NULL);
	}

	for (i = 0;i < size; i++)
	{
		cr[i] = c;
	}
	return (cr);
}
