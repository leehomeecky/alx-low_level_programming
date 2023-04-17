#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Write a function that prints a struct dog
 *
 * @d: pointer to structure dog
 */

void print_dog(struct dog *d)
{
	(d->name == NULL) ? printf("Name: nil\n") : printf("Name: %s\n", d->name);
	(d->age == 0) ? printf("Age: nil\n") : printf("Age: %f\n", d->age);
	(d->owner == NULL) ? printf("Owner: nil") : printf("Owner: %s", d->owner);
}
