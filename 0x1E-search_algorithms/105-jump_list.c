#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: Pointer to the head of the list to search
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located,
 * or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_step, i;
	listint_t *current, *prev, *search;

	if (!list)
		return (NULL);

	jump_step = sqrt(size);
	current = list;
	prev = NULL;

	while (current && current->index < size && current->n < value)
	{
		prev = current;
		for (i = 0; i < jump_step && current->next; i++)
		{
			current = current->next;
		}
		printf("Value checked at index [%ld] = [%d]\n",
			   current->index, current->n);
		if (current->n >= value || !current->next)
		{
			break;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   prev ? prev->index : 0, current->index);
	search = prev ? prev : list;
	while (search != current->next && search->n <= value)
	{
		printf("Value checked at index [%ld] = [%d]\n",
			   search->index, search->n);
		if (search->n == value)
		{
			return (search);
		}
		search = search->next;
	}

	return (NULL);
}
