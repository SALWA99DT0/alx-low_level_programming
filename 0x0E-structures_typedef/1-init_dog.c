#include <stdio.h>
#include "dog.h"
/**
*init_dog - initialize a variable of type struct dog
*@d: the pointer to struct to initialize
*@name: name of the dog to initialize
*@age: age of the dog
*@owner: dog owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
