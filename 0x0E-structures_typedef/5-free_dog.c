#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - frees dynammic memory created
  * @d: type struct dog 
  *
  * Return: nothing
  */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
