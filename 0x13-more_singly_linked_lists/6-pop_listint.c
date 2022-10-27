#include "lists.h"

/**
  * pop_listint - deletes node of linked list.
  * @head: head of list.
  * Return:head node's data.
  */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
	{
		return (0);
	}

	curr = *head;

	n = curr->n;
	h = curr->next;

	free(curr);

	*head = h;

	return (n);
}
