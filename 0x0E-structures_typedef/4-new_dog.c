#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - creates a new dog.
  * @name: name of the dog
  * @age: of the dog
  * @owner: of the dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int lenName, lenOwner;

	newDog = malloc(sizeof(dog_t));
	
	if (newDog == NULL)
	{
		return (NULL);
	}

	lenName = _strnlen(name);
	lenOwner = _strnlen(owner);

	newDog->name = malloc((lenName + 1) * sizeof(char));

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc((lenOwner + 1) * sizeof(char));

	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return(NULL);
	}

	_strncpy(newDog->name, name);
	_strncpy(newDog->owner, owner);

	newDog->age = age;

	return (newDog);

}

/**
  * strnlen - checks string length
  * @strn: string to copy
  *
  * Return: integer
  */

int _strnlen(char *strn)
{
	int i;
	for (i = 0; strn[i] != '\0'; i++)
	{
	}

	return (i);
}

/**
  * _strncpy - copies string from dest to src
  * @src: source of string
  * @ dest: destinatio of string
  *
  * Return: Nothing
  */

void _strncpy(char *dest, char *src)
{
	int i, len;

	len = _strnlen(src);

	for (i = 0; i <= len; i++)
	{
		dest[i] =src[i];
	}
}
