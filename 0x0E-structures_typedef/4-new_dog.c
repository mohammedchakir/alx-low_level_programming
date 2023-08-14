#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Create a new dog with given name, age, and owner
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner's name
 *
 * Return: Pointer to the newly created dog, or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *copied_name, *copied_owner;

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	copied_name = strdup(name);
	if (copied_name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	copied_owner = strdup(owner);
	if (copied_owner == NULL)
	{
		free(copied_name);
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->name = copied_name;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = copied_owner;

	return (new_dog_ptr);
}
