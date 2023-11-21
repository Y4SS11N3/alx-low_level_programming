#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a specified index.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to delete, starting at 0.
 *
 * Return: 1 if successful, -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count; /* Node counter */
	listint_t *previous; /* Previous node */
	listint_t *toDelete; /* Node to delete */

	previous = *head;

	if (index != 0)
	{
		for (count = 0; count < index - 1 && previous != NULL; count++)
			previous = previous->next;
	}

	if (previous == NULL || (previous->next == NULL && index != 0))
		return (-1);

	toDelete = index == 0 ? *head : previous->next;

	if (index != 0)
		previous->next = toDelete->next;
	else
		*head = toDelete->next;

	free(toDelete);
	return (1);
}
