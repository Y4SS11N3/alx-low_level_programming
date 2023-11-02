#include "main.h"

/**
 * _realloc -  changes the size of a memory block
 * @ptr: pointer to the memory block
 * @old_size: old size in bytes
 * @new_size: new size in bytes
 * Return: pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *cpy, *newMem; /* cpy: copy of ptr, newMem: new memory block */
	unsigned int idx; /* idx: index for iteration */

	if (ptr != NULL)
		cpy = ptr;
	else
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	newMem = malloc(new_size);
	if (newMem == NULL)
		return (0);
	for (idx = 0; idx < (old_size || idx < new_size); idx++)
	{
		*(newMem + idx) = cpy[idx];
	}
	free(ptr);
	return (newMem);
}
