#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the new table, or NULL on failure.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i;

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
		return (NULL);

	sht->size = size;
	sht->array = malloc(sizeof(shash_node_t *) * size);
	if (sht->array == NULL)
	{
		free(sht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		sht->array[i] = NULL;

	sht->shead = NULL;
	sht->stail = NULL;
	return (sht);
}

/**
 * shash_node_create - Helper function to create a new sorted hash node.
 * @key: The key of the new node.
 * @value: The value of the new node.
 *
 * Return: A pointer to the new node, or NULL on failure.
 */
shash_node_t *shash_node_create(const char *key, const char *value)
{
	shash_node_t *node;

	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
		return (NULL);

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}

	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	node->next = NULL;
	node->sprev = NULL;
	node->snext = NULL;

	return (node);
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: The hash table to add or update the key/value in.
 * @key: The key. Cannot be an empty string.
 * @value: The value associated with the key. Must be duplicated.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *tmp, *new;

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}

	new = shash_node_create(key, value);
	if (new == NULL)
		return (0);

	new->next = ht->array[index];
	ht->array[index] = new;

	/* Insert into sorted list */
	if (ht->shead == NULL || strcmp(ht->shead->key, key) >= 0)
	{
		if (ht->shead != NULL)
			ht->shead->sprev = new;
		new->snext = ht->shead;
		ht->shead = new;
		if (ht->stail == NULL)
			ht->stail = new;
	}
	else
	{
		for (node = ht->shead; node->snext != NULL; node = node->snext)
		{
			if (strcmp(node->snext->key, key) >= 0)
			{
				break;
			}
		}

		new->snext = node->snext;
		if (node->snext != NULL)
			node->snext->sprev = new;
		else
			ht->stail = new;
		new->sprev = node;
		node->snext = new;
	}

	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to look into.
 * @key: The key to look for.
 *
 * Return: The value associated with the key,
 * or NULL if key couldn’t be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	for (node = ht->array[index]; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}

	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: The hash table to print.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	char *comma = "";

	if (ht == NULL)
		return;

	printf("{");
	for (node = ht->shead; node != NULL; node = node->snext)
	{
		printf("%s'%s': '%s'", comma, node->key, node->value);
		comma = ", ";
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: The hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	char *comma = "";

	if (ht == NULL)
		return;

	printf("{");
	for (node = ht->stail; node != NULL; node = node->sprev)
	{
		printf("%s'%s': '%s'", comma, node->key, node->value);
		comma = ", ";
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *next;

	if (ht == NULL)
		return;

	current = ht->shead;
	while (current != NULL)
	{
		next = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = next;
	}
	free(ht->array);
	free(ht);
}

