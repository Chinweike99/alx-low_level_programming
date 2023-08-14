#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include "dog.h"
/**
 * struct dog - The data type
 * @name: Charcter name
 * @age: Age of dog
 * @owner: Name of owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;
typedef struct dog dog_t;
#endif
