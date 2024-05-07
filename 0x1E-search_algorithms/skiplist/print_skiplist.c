#include "../search_algos.h"

/**
 * print_skiplist - Prints the content of a skip list
 * @list: Pointer to the head of the skip list
 */
void print_skiplist(const skiplist_t *list)
{
    const skiplist_t *node, *express;

    printf("List :\n");
    for (node = list; node; node = node->next)
    {
        printf("Index[%lu] = [%d]\n", node->index, node->n);
    }

    printf("\nExpress lane :\n");
    for (express = list; express; express = express->express)
    {
        printf("Index[%lu] = [%d]\n", express->index, express->n);
    }
    printf("\n");
}
