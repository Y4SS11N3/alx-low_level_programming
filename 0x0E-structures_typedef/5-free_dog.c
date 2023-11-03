#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Deallocates memory
 * @d: Pointer to a struct dog
 * Description: Deallocates memory for struct
 */

void free_dog(dog_t *d)
{
    if (d)
    {
        free(d->name);
        free(d->owner);
        free(d);
    }
}
/* YN */
