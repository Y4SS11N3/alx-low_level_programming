#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node, starting from 0
 *
 * Return: the nth node, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index = 0;

	while (head != NULL)
	{
		if (current_index == index)
		{
			return (head);
		}
		head = head->next;
		current_index++;
	}
	return (NULL);
}
