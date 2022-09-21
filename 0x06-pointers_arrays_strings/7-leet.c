#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @*: String to be encoded.
 *
 * Return: Pointer to the encoded string.
 */

char *leet(char *)
{
	int i1 = 0, i2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', 'T'};

	while (*[i1])
	{
		for (i2 = 0; i2 <= 7; i2++)
		{
			if (*[i1] == leet[i2] || *[i1] - 32 == leet[i2])
			{
				*[i1] = i2 + '0';
			}

		}
		i1++
	}
	return (*);
}
