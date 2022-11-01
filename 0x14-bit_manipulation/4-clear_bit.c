#include "main.h"

/**
  * clear_bit - sets value of bit to 0 at a given index.
  * @index:position of value.
  * @n:value of bit.
  * Return: 1 on success otherwise -1.
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b = 0, mask;

	if (index > 63)
		return (-1);

	mask = (1 << index);

	*n = ((n & ~mask) | (b << index));
	return (1);
}
