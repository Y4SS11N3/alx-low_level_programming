#include "lists.h"

/**
 * find_listint_loop - Finds a loop in a listint_t linked list.
 * @head: Head of the list.
 *
 * Return: Address of the node where the loop starts, or NULL if no loop.
 * Uses only two variables, with no malloc, free, or arrays.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fastPtr = head; /* Pointer moving at twice the speed */
	listint_t *slowPtr = head; /* Pointer moving at normal speed */

	while (head && fastPtr && fastPtr->next)
	{
		slowPtr = slowPtr->next;
		fastPtr = fastPtr->next->next;

		if (slowPtr == fastPtr)
		{
			slowPtr = head;
			while (slowPtr != fastPtr->next)
			{
				fastPtr = fastPtr->next;
				if (fastPtr->next == slowPtr)
					break;
				slowPtr = slowPtr->next;
			}
			return (fastPtr->next);
		}
	}

	return (NULL);
}
