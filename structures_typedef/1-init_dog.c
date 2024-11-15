#include "dog.h"

/**
 *init_dog- funcion que inicializa variables
 *@name: nombre
 *@age: edad
 *@owner: dueÃo
 *@d: puntero
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}
	
}
