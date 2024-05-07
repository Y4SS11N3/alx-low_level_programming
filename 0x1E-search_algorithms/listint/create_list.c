#include "../search_algos.h"

/**
 * create_list - Creates a linked list from an array of integers
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 *
 * Return: Pointer to the head of the created linked list
 */
listint_t *create_list(int *array, size_t size)
{
    listint_t *list = NULL;
    listint_t *node = NULL;
    listint_t *prev = NULL;
    size_t i;

    for (i = 0; i < size; i++)
    {
        node = malloc(sizeof(listint_t));
        if (node == NULL)
        {
            free_list(list);
            return (NULL);
        }
        node->n = array[i];
        node->index = i;
        node->next = NULL;

        if (prev)
            prev->next = node;
        else
            list = node;

        prev = node;
    }
    return (list);
}
