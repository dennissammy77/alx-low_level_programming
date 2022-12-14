#include "function_pointers.h"

/**
 * int_index - function that searches the integers.
 * @array: array.
 * @size:size of array.
 * @cmp: pointer to function.
 * Return: index of function.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size;i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
