#include <stdio.h>

/**
 * print_dog - Exhibits a dog structure
 * @d: Pointer to a struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == 0) /* Check if the struct pointer is NULL */
		return;
	if (d->name == 0)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name); /* Print the name field */
	printf("Age: %f\n", d->age); /* Print the age field */
	if (d->owner == 0)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner); /* Print the owner field */
}
/* YN */
