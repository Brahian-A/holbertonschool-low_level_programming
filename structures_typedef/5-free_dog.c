#include "dog.h"
/**
 *free_dog- funcion que libera memoria
 *@d: que liberar
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
