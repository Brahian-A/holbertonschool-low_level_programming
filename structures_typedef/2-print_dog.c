#include "dog.h"
#include <stdio.h>
/**
 *print_dog- funcion que devuelve si es null
 *@d: puntero a la estructura dog
 */



void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");

		printf("Age: %1f\n", d->age);

		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
