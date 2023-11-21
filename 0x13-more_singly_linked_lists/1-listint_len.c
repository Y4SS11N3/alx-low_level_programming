#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: Head of the list.
 *
 * Return: Node count.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodeCount = 0;  /* Counts nodes */

	while (h != NULL)
	{
		h = h->next;
		nodeCount++;
	}

	return (nodeCount);
}
