#include "../search_algos.h"

/**
 * free_list - Frees a linked list
 * @list: Pointer to the head of the linked list
 */
void free_list(listint_t *list)
{
    listint_t *node;

    while (list != NULL)
    {
        node = list;
        list = list->next;
        free(node);
    }
}
