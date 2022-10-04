#include "main.h"
#include  <stdlib.h>

/**
 * _strdup - returns pointer to a newly allocated space in memory.
 *@str: string.
 *Return: pointer to string.
 */
char *_strdup(char *str)
{
	char *string;
	unsigned int x,z;

	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x] != '\0'; x++)
		;

	string = (char *)malloc(sizeof(char) * (x + 1));

	if (string == NULL)
	{
		return (NULL);
	}

	for (z = 0;z <= x;z++)
	{
		string[z] = str[z];
	}
	return (string);
}
