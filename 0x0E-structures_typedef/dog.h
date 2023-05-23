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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
