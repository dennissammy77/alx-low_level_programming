#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements in a list.
 * @h:singly linked list.
 * return: number of elements.
 */
size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		n++;
	}
	return (n);
}
