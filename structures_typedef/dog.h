#ifndef DOG_H
#define DOG_H
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 *struct dog- la estructura
 *@name: nombre
 *@age: edad
 *@owner: due√o
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
