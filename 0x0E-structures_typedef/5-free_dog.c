#include <stdlib.h>
#include "dog.h"
#include "main.h"
/**
 * free_dog - frees memory
 * @d: struct to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	return (free_dog);
}
