#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts new node at a specified position.
 * @head: Pointer to head of list.
 * @idx: Index for new node insertion, starting at 0.
 * @n: Integer for new node.
 *
 * Return: Address of new node, or NULL if it fails or insertion isn't possible
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count; /* Node counter */
	listint_t *newNode; /* New node */
	listint_t *current; /* Current node in list */

	current = *head;
	if (idx != 0)
	{
		for (count = 0; count < idx - 1 && current != NULL; count++)
			current = current->next;
	}

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		if (current == NULL)
		{
			free(newNode);
			return (NULL);
		}
		newNode->next = current->next;
		current->next = newNode;
	}

	return (newNode);
}
