#include "dog.h"
/**
*init_dog -  initializes a variable of type struct dog
*@d: the dog struct
*@name: new name
*@age: new age
*@owner: new owner
*Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
