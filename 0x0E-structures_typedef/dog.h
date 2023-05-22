#ifndef DOG_H
#define DOG_H

/**
*struct dog - dog information
*@name: first member
*@age: second member
*@owner: third member
*Description: oky my description
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
/**
*dog_t - typdef for struct dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner);
