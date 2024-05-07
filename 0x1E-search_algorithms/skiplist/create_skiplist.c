#include "../search_algos.h"

/**
 * create_skiplist - Creates a skip list from an array of integers
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 *
 * Return: Pointer to the head of the created skip list
 */
skiplist_t *create_skiplist(int *array, size_t size)
{
    skiplist_t *list = NULL;
    skiplist_t *node, *prev;
    size_t i, j, step;

    for (i = 0; i < size; i++)
    {
        node = malloc(sizeof(skiplist_t));
        if (node == NULL)
        {
            free_skiplist(list);
            return (NULL);
        }
        node->n = array[i];
        node->index = i;
        node->express = NULL;
        node->next = NULL;

        if (list == NULL)
        {
            list = node;
            continue;
        }

        prev = list;
        while (prev->next != NULL && prev->next->n < node->n)
            prev = prev->next;
        node->next = prev->next;
        prev->next = node;

        if (i && i % (size_t)sqrt(size) == 0)
        {
            step = (size_t)sqrt(size);
            prev = list;
            for (j = 0; j < step && prev; j++)
            {
                while (prev->next != NULL && prev->next->index < i)
                    prev = prev->next;
                if (prev->next != NULL && prev->next->index == i)
                    node->express = prev->next;
                else
                    node->express = prev;
                prev = prev->express;
            }
        }
    }
    return (list);
}
