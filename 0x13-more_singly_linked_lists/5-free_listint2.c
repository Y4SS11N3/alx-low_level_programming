#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets head to NULL.
 * @head: Pointer to the head of the list.
 *
 * Iterates through the list, freeing each node, and sets head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *current; /* Current node in list */
	listint_t *nextNode; /* Next node in list */

	if (head != NULL)
	{
		current = *head;
		while ((nextNode = current) != NULL)
		{
			current = current->next;
			free(nextNode);
		}
		*head = NULL;
	}
}
