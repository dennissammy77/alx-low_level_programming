#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elemts of an array.
 * @a: pointer,
 * @n: integer.
 */
void print_array(int *a, int n)
{
	short c = 0;

	while (n-- > 0)
	{
		printf("%d", a[c++]);
		if (n != 0)
			printf(", ");
	}
	printf("\n");
}
