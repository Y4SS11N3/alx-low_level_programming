#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Head of the list.
 * @index: Index of the node, starting at 0.
 *
 * Return: The nth node, or NULL if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count; /* Node counter */

	for (count = 0; count < index && head != NULL; count++)
	{
		head = head->next;
	}

	return (head);
}
