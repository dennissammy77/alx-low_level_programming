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

	if (index >= 64)
	{
		return (-1);
	}

	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	return (1);
}
