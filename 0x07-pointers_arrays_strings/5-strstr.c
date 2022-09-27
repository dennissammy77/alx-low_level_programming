#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @*haystack: pointer to string.
 * @*needle: pointer to substring.
 * Return - pointer to located substring.
 */
char *_strstr(char *haystack,cahr *needle)
{
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do{
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++;
			}while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
