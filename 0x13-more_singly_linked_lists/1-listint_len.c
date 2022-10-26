#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list.
 * @h: head of a linked list.
 * Return: elements of linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
