#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list -  function that prints all the elements of a list
 * @h: pointer
 * Description: string singly linked list
 * Return: the number of nodes
 *
 */

size_t print_list(const list_t *h)
{
	size_t S = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		S++;
	}
	return (S);
}
