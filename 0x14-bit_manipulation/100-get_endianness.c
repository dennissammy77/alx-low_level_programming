#include "main.h"

/**
  * get_endianness - checks the endianness.
  * Return: 0 if big endian otherwise 1 if little endian.
  */
int get_endianness(void)
{
	int a;

	char *y = (char *)&a;

	if (*y == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
