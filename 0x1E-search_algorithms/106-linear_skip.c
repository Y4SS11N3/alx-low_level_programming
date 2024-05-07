#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list to search in
 * @value: The value to search for
 *
 * Return: Pointer on the first node where value is located,
 * or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (list == NULL)
		return (NULL);

	node = list;
	jump = list;
	while (jump->next != NULL && jump->n < value)
	{
		node = jump;
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%lu] = [%d]\n",
				   (unsigned long)jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		   (unsigned long)node->index, (unsigned long)jump->index);

	while (node->index < jump->index && node->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			   (unsigned long)node->index, node->n);
		node = node->next;
	}
	printf("Value checked at index [%lu] = [%d]\n",
		   (unsigned long)node->index, node->n);

	if (node->n == value)
		return (node);
	else
		return (NULL);
}
