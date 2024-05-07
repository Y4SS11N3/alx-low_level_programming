#include "../search_algos.h"

/**
 * free_skiplist - Frees a skip list
 * @list: Pointer to the head of the skip list
 */
void free_skiplist(skiplist_t *list)
{
    skiplist_t *node;

    while (list)
    {
        node = list;
        list = list->next;
        free(node);
    }
}
