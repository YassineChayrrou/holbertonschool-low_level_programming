#include "dog.h"
/**
  *init_dog - initialize variabe of type struct dog
  *@d: pointer for dog
  *@name: dog name
  *@age: dog age
  *@owner: dog owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != '\0')
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
