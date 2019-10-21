#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - first struct
 * @name: First member
 * @age: Second member
 *@owner: Third member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
