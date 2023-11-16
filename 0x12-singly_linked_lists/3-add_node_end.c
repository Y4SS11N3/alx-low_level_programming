#include "lists.h"
#include <string.h>

/**
 * add_node_end - appends a new node at the end of the list
 * @head: pointer to the head of the list
 * @str: string to be duplicated in the new node
 * Return: the address of the newly appended element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newTail; /* New tail element */
	list_t *current; /* Current element in iteration */
	int strSize; /* Size of the input string */

	newTail = malloc(sizeof(list_t));
	if (!newTail)
		return (NULL);

	current = *head;

	strSize = 0;
	while (str[strSize])
		strSize++;
	newTail->str = strdup(str);
	newTail->len = strSize;
	newTail->next = NULL;

	if (*head == NULL)
	{
		*head = newTail;
		return (newTail);
	}

	while (current->next)
		current = current->next;

	current->next = newTail;
	return (newTail);
}
