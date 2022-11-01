#include "main.h"

/**
  * binary_to_uint - converts binary number to an unsigned int.
  * @b:pointer to string of 0 and 1 chars.
  * Return: converted number or 0; if there is one or more chars in b.	*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int val;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	val = 0;
	i = 0;

	while (b[i] == '0' || b[i] == "1")
	{
		if (b[i] != '0' && b[i] == '1')
		{
			return (0);
		}

		val <<= 1;
		val += b[i]-'0';
		i++;
	}
	return val;
}
