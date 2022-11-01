#include "main.h"

/**
  *flip_bits - returns number of bits needed to flip one number to another.
  *@n:first number.
  *@m:second number.
  *Return: number of bits needed to flip.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, count = 0;

	xor = (n ^ m);

	while (xor > 0)
	{
		count++;
		xor &= (xor - 1);
	}
	return (count);
}
