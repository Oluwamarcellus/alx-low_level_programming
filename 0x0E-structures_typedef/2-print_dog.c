#include "dog.h"
#include <stdio.h>
/**
*print_dog - prints a struct dog
*@d: dog struct
*Return: void
*/
void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	if (d->name != 0)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	if (d->age != 0)
		printf("Age: %f\n", d->age);
	else
		printf("(nil)\n");
	if (d->owner != 0)
		printf("Owner: %s\n", d->owner);
	else
		printf("(nil)\n");
}
