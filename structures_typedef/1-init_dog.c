#include "dog.h"

/**
 *init_dog- funcion que inicializa variables
 *@name: nombre
 *@age: edad
 *@owner: due�o
 *@d: puntero
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->age = age;
	d->name = name;
	d->owner = owner;
}
