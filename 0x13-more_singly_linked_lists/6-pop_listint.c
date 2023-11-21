#include "lists.h"

/**
 * pop_listint - Deletes head node of listint_t, returns its data
 * @head: Pointer to the head of the list.
 *
 * Return: Data of the head node. Returns 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int headData; /* Data of the head node */
	listint_t *nextNode; /* Next node in list */
	listint_t *currentHead; /* Current head node */

	if (*head == NULL)
		return (0);

	currentHead = *head;
	headData = currentHead->n;
	nextNode = currentHead->next;

	free(currentHead);
	*head = nextNode;

	return (headData);
}
