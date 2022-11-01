#include "main.h"

/**
  * get_bit - returns value of bit at a given index.
  * @index:index of bit.
  * @n: bit.
  * Return: value of bit at index otherwise -1.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
	{
		return (0);
	}
	for (i = 0; i < 64; n >> 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}
	return (-1);
}
