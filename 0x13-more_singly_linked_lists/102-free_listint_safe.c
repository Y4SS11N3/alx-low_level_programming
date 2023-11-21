#include "lists.h"

/**
 * frelstp2 - Frees a linked list.
 * @head: Pointer to the head of the list.
 *
 * Iterates through the list and frees each node, setting head to NULL.
 */
void frelstp2(listp_t **head)
{
	listp_t *current; /* Current node */
	listp_t *nextNode; /* Next node */

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

/**
 * free_listint_safe - Frees a listint_t list, safe for lists with loops.
 * @h: Pointer to the head of the list.
 *
 * Return: Size of the list that was freed. Sets head to NULL.
 * Iterates through the list only once.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodeCount = 0; /* Node counter */
	listp_t *helperPtr = NULL; /* Helper list pointer */
	listp_t *newNode, *temp; /* New and temporary nodes for helper list */
	listint_t *current; /* Current node in list */

	while (*h != NULL)
	{
		newNode = malloc(sizeof(listp_t));
		if (newNode == NULL)
			exit(98); /* Exit on allocation failure */

		newNode->p = (void *)*h;
		newNode->next = helperPtr;
		helperPtr = newNode;

		temp = helperPtr;
		while (temp->next != NULL)
		{
			temp = temp->next;
			if (*h == temp->p)
			{
				*h = NULL;
				frelstp2(&helperPtr);
				return (nodeCount);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		nodeCount++;
	}

	*h = NULL;
	frelstp2(&helperPtr);
	return (nodeCount);
}
