#include "main.h"

/**
 * reverse_array -  reverses the content of array.
 * @*a: pointer of array.
 * @n: number of items in array.
 */

void reverse_array(int *a, int n);
{
	int tmp, i;

	for (i = n - 1; i >= n/2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
