#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - exhibits a name
 * @name: name to exhibit
 * @f: pointer to the exhibiting function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
