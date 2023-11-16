#include "lists.h"

/**
 * free_list - releases all memory used by the linked list
 * @head: pointer to the start of the list
 */
void free_list(list_t *head)
{
	list_t *nextNode; /* Next node in the list */

	while (head != NULL)
	{
		nextNode = head->next;
		free(head->str);
		free(head);
		head = nextNode;
	}
}
