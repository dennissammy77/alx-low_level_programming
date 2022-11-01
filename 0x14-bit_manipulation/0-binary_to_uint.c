#include "main.h"

/**
  * binary_to_uint - converts binary number to an unsigned int.
  * @b:pointer to string of 0 and 1 chars.
  * Return: converted number or 0; if there is one or more chars in b.	*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int val,mult;
	int i;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i];)
		i++;

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		val += (b[i] - '0') * mult;
		mult *= 2;
	}

	return (val);
}
