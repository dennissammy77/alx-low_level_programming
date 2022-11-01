#include "main.h"

/**
  * set_bit - sets value of a bit to 1 at a given index.
  * @n:number or value.
  * @index: index/position of bit.
  * Return: 1 on success otherwise -1.
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 63)
	{
		return (-1);
	}
	/*create mask that has set bit using bitwise shift*/
	mask = 1 << index;
	/*to change value of bit to b,we need to make it 0*/
	/*then change it to b by useing the OR operand*/
	*n = (*n | mask);

	return (1);
}
