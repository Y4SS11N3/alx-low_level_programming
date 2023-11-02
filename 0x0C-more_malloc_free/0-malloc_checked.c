#include "main.h"

/**
 * malloc_checked - allocates a block of memory
 * @b: size of memory to allocate
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	/* ptr: pointer to allocated memory */
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
