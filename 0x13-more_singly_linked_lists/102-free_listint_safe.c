#include "lists.h"

/**
  * free_listp2 - frees a linked a list.
  * @head:head on linked list.
  * Return: no return.
  */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
/**
  * free_listint_safe - frees a linked list.
  * @h:head of linked list.
  * Return: size of list that was freed.
  */
size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	listp_t *hptr, *new, *add;
	listint_t *curr;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (n);
			}
		}
		curr = *h;
		*h = (*h)->next;
		free(curr);
		n++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (n);
}
