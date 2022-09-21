#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: pointer to string.
 * @src: string to be concatenate.
 * Return: pointe to @dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
	{
		dest_len++;
	}

	for (i = 0; src[i]; i++)
		dest[des_len++] = src[i];

	return (dest);
}
