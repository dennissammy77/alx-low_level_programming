#include "main.h"

/**
 * *string_toupper - changes lowercase of string to uppercase.
 * @*: string tobe changed.
 * Return: pointe to the changed string.
 */
char *string_toupper(char *)
{
	int i = 0;

	while (*[i])
	{
		if (*[i] >= 'a' && *[i] <= 'z')
		{
			*[i] -= 32;
		}
		i++;
	}
	return (*);
}
