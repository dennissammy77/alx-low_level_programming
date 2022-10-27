#include "lists.h"

size_t find_loop(const listint_t *head);

/**
  * find_loop - finds number of unique nodes in loop.
  * @head: pointer to head of linked lists.
  * Return: if list is looped (0) otherwise - number of unique nodes.
  */
size_t find_loop(const listint_t *head)
{
	listint_t slow,fast;
	size_t n = 1;
	/**slow pointer will move ahead by one node slow=slow->next
	  *fast pointer will move by two nodes ahead, fast = (fast->next)->next
	  *n: keep track of unique nodes.
	  */

	if (head == NULL || head->next NULL)
		/* checks if the node and next node points to NULL*/
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast != NULL) /*checks the node is not null*/
	{
		if (slow == fast) /*will determine if loop exists*/
		{
			slow = head;
			while (slow != fast) /*move to next node*/
			{
				n++;/*move to next node*/
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
		fast = fast->next;
	}
	return (0);
}
/**
  * print_listint_safe - prints  linked list.
  * @head:head of list.
  * Return: The number of nodes in the list.
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t n,index = 0;

	n = find_loop(head); /*number of nodes*/

	if (n == 0)
	{
		for (; head != NULL;n++)
		{
			printf("[%p] %d\n", (void *)head,head->n);
			head = head->next;
		}
	}
	else{
		for (index = 0; index < n;index++)
		{
			printf("[%p] %d\n", (void *)head,head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head,head->n);
	}
	return (n);
}
