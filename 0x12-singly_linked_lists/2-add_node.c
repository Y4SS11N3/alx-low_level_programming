#include "lists.h"
#include <string.h>

/**
 * add_node - inserts a new node at the start of the list
 * @head: pointer to the head of the list
 * @str: string data for the new node
 * Return: pointer to the new node, or NULL if creation failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newElem; /* New element for the list */
	int str_len; /* Length of the provided string */

	newElem = malloc(sizeof(list_t));
	if (!newElem)
		return (NULL);

	str_len = 0;
	while (str[str_len])
		str_len++;
	newElem->str = strdup(str);
	newElem->len = str_len;
	newElem->next = (*head);
	(*head) = newElem;
	return (newElem);
}
