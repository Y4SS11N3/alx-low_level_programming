#include "lists.h"

/**
 * add_nodeint - Adds a new node at the start of a listint_t list.
 * @head: Pointer to the head of the list.
 * @n: Integer for the new node.
 *
 * Return: Address of the new node, or NULL if allocation fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));  /* Allocate new node */

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
