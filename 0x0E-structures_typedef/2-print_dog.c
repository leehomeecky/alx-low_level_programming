#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Write a function that prints a struct dog
 *
 * @d: pointer to structure dog
 */

void print_dog(struct dog *d)
{
	(d->name == NULL) ? printf("nil\n") : printf("%s\n", d->name);
	(d->age == 0) ? printf("nil\n") : printf("%f\n", d->age);
	(d->owner == NULL) ? printf("nil") : printf("%s", d->owner);
}
