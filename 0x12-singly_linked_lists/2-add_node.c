#include "lists.h"

/**
 * add_node - adds new node.
 * @head:head of a linked list.
 * @str:string .
 * Return:address of head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (n = 0;str[n];n++)
		;

	new->len = n;
	new->next = *head;
	*head = new;

	return (*head);
}
