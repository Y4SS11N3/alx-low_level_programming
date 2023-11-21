#include "lists.h"

/**
 * print_listint - Prints elements of a listint_t list.
 * @h: Head of the list.
 *
 * Return: Node count.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodeCount = 0;  /* Counts nodes */

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeCount++;
	}

	return (nodeCount);
}
