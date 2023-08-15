#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
/**
 */
typedef struct dog
{
	char *name;
	float aage;
	char *owner;
} dog_t;
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
#endif
