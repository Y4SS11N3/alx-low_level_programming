#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Sets up a variable of type struct dog
 * @d: Pointer to a struct dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Description: This function sets up a variable of type struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL) /* Check if the struct pointer is NULL */
		return;

	else
	{
		d->name = name; /* Set the name field */
		d->age = age; /* Set the age field */
		d->owner = owner; /* Set the owner field */
	}
}
/* YN */
