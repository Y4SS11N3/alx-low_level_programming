#include <stdlib.h>
#include "dog.h"

/**
 * duplicate_str - Duplicates a string
 * @str: String to duplicate
 * Return: Pointer to the duplicated string
 */

char *duplicate_str(char *str)
{
	char *dup_str;
	int idx, length;

	if (str == NULL)
	{
		return (NULL);
	}

	for (length = 0; str[length] != '\0'; length++)
		;

	dup_str = malloc(sizeof(char) * (length + 1));

	if (dup_str == NULL)
	{
		return (NULL);
	}

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		dup_str[idx] = str[idx];
	}

	dup_str[idx] = '\0';
	return (dup_str);
}

/**
 * new_dog - Constructs a new dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: Pointer to new dog structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_pup;
	char *dup_name, *dup_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new_pup = malloc(sizeof(dog_t));
	if (new_pup == NULL)
	{
		return (NULL);
	}

	dup_name = duplicate_str(name);
	if (dup_name == NULL)
	{
		free(new_pup);
		return (NULL);
	}
	(*new_pup).name = dup_name;

	(*new_pup).age = age;

	dup_owner = duplicate_str(owner);
	if (dup_owner == NULL)
	{
		free((*new_pup).name);
		free(new_pup);
		return (NULL);
	}
	(*new_pup).owner = dup_owner;

	return (new_pup);
}
/* YN */
