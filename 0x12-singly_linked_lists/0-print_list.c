#include "lists.h"

/**
 * print_list - displays each element in a linked list
 * @h: pointer to the start of the list
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
    size_t ctr = 0; /* Node counter */

    if (h == NULL)
        return (0);
    while (h->next)
    {
        if (!h->str)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", h->len, h->str);
        h = h->next;
        ctr++;
    }
    /* Print the last node if it exists */
    if (h)
    {
        if (!h->str)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", h->len, h->str);
        ctr++;
    }
    return (ctr);
}
