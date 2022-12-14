#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index index of a listint_t.
  * @head:head of linked list.
  * @index:index of list where node is.
  * Return: (1) success Or (-1) fail.
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev;
	listint_t *next;

	prev = *head;

	if (index != 0)
	{
		for (i = 0; i < (index - 1) && prev != NULL; i++)
		{
			prev = prev->next;
		}
	}
	if (prev == NULL || (prev->next == NULL && index != 0))
		return (-1);

	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}
	return (1);
}
