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
	if (d->name == 0)
		d->name = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == 0)
		d->owner = "(nil)";
	printf("Owner: %s\n", d->owner);
}
