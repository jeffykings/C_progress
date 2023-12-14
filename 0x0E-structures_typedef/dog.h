#ifndef DOG_H
#define DOG_H

/**
  * struct dog - Has properties of dogs
  * @name: array of character
  * @owner: array of character
  * @age: float
  */

struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
  * dog_t - typedef of struct dog
  */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void _strncpy(char *dest, char *src);
 int _strnlen(char *strn);
void free_dog(dog_t *d);
#endif
