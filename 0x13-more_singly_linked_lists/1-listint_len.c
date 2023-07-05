#include "lists.h"
#include <string.h>

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: pointer
 *
 * Description: counts no.of elements
 *
 * return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
	h = h->next;
	}
	return (count);
}
