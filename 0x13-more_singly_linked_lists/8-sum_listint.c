#include "lists.h"

/**
 * sum_listint - Returns the sum of all data (n) in a listint_t linked list.
 * @head: Head of the list.
 *
 * Return: Sum of all data, 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int totalSum = 0; /* Sum of all data in the list */

	while (head != NULL)
	{
		totalSum += head->n;
		head = head->next;
	}

	return (totalSum);
}
