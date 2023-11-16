#include "lists.h"

/**
 * list_len - calculates the total number of elements in a linked list
 * @h: reference to the head of the list
 * Return: the total node count
 */
size_t list_len(const list_t *h)
{
	size_t cnt = 0; /* Node count */

	while (h)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
