#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints info on a dog struct
 * @d: dog struct to print info
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}
