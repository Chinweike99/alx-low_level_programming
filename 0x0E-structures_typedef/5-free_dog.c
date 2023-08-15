#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
void free_dog(dog_t *d)
{
	dog_t *ptr;
	ptr = malloc(sizeof(dog_t));
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
