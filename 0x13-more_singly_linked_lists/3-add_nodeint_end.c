#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to first node
 * @n: integer
 *
 * return: null if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *y = *head;

	node = malloc(sizeof(listint_t));

	if (!node)
	return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
	*head = node;
	return (node);
	}

	while (y->next)
	y = y->next;

	y->next = node;

	return (node);
}


