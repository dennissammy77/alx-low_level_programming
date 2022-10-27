#include "lists.h"

size_t find_loopint(listint_t *head);

/**
  * find_loopint - couunts numbe rof unique nodes in looped linked list.
  * @head: head of linked list.
  * Return: loop in linked list - (0) otherwise number of unique nodes.
  */
size_t find_loopint(listint_t *head);
{
	size_t n = 1;
	listint_t slow,fast;

	slow = head->next;
	fast = (head->next)->next;

	while (fast != NULL)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				n++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				n++;
				slow = slow->next;
			}
			return (n);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (0);
}

/**
  * free_listint_safe - frees a linked list safely.
  * @h: pointer to address of head of linked list.
  * Return: Size of the list freed.
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t n,index = 0;

	n = find_loopint(*h);

	if (n == 0) /*no loops exist*/
	{
		for (; h != NULL && *h != NULL;n++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}else{
		for (index = 0;index < n;index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		*h = NULL;
	}

	h = NULL;
	return (n);
}
