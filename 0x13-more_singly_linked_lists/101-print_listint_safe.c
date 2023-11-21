#include "lists.h"

/**
 * frlitsp - Frees a linked list.
 * @head: Pointer to the head of the list.
 *
 * Iterates through the list and frees each node, setting head to NULL.
 */
void frlitsp(listp_t **head)
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
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Head of the list.
 *
 * Return: Number of nodes in the list. Can print lists with loops.
 * Goes through the list once. Exits with status 98 on failure.
 * Format: Node address - Node data.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodeCount = 0; /* Node counter */
	listp_t *headPtr = NULL; /* Pointer to head of helper list */
	listp_t *newNode, *temp; /* New and temporary nodes for helper list */

	while (head != NULL)
	{
		newNode = malloc(sizeof(listp_t));
		if (newNode == NULL)
			exit(98); /* Exit on allocation failure */

		newNode->p = (void *)head;
		newNode->next = headPtr;
		headPtr = newNode;

		temp = headPtr;
		while (temp->next != NULL)
		{
			temp = temp->next;
			if (head == temp->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				frlitsp(&headPtr);
				return (nodeCount);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodeCount++;
	}

	frlitsp(&headPtr);
	return (nodeCount);
}
