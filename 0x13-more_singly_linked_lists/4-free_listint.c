#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Head of the list to free.
 *
 * Iterates through the list and frees each node.
 */
void free_listint(listint_t *head)
{
	listint_t *current; /* Current node in list */

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
