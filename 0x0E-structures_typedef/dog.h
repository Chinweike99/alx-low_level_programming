#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
