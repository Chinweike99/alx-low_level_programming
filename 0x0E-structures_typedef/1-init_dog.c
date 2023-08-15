#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * struct: datatype
 * init_dog - Variable name
 * @name: name of dog
 * @age: Float value for age
 * @owner: Name of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name  = malloc(strlen(name) + 1);
	if (d->name)
	{
		strcpy(d->name, name);
	}
	d->age = age;
	d->owner = malloc(strlen(owner) + 1);
	if (d->owner)
	{
		strcpy(d->owner, owner);
	}
}
#endif
