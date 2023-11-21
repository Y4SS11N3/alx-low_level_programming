#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Pointer to the first node of the reversed list.
 * Only one loop is used, with no malloc,free,or arrays,and only two variables.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL; /* Previous node */
	listint_t *nextNode = NULL; /* Next node */

	while (*head != NULL)
	{
		nextNode = (*head)->next; /* Store next node */
		(*head)->next = previous; /* Reverse link */
		previous = *head; /* Update previous */
		*head = nextNode; /* Move to next node */
	}

	*head = previous;
	return (*head);
}
