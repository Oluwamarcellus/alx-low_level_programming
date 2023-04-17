#include <stdlib.h>
#include "dog.h"
/**
*s_len - find the length os string
*@str: string
*Return: int
*/
int s_len(char *str)
{
	int n = 0;

	while (str[n] != '\n')
		n++;
	return (n);
}
/**
*s_copy - copies string
*@dest: destination
*@src: source
*Return: char pointer
*/
char *s_copy(char *dest, char *src)
{
	int l = 0, j;

	while (src[l] != '\0')
		l++;
	for (j = 0; j < l; j++)
		dest[j] = src[j];
	dest[j] = '\0';
	return (dest);
}
/**
*new_dog - function that creates a new dog
*@name: name to give the dog
*@age: age of the dog
*@owner: owner of the dog
*Return: struct pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int len1 = s_len(name);
	int len2 = s_len(owner);

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == 0)
		return (0);
	n_dog->name = malloc(sizeof(char) * (len1 + 1));
	if (n_dog->name == 0)
	{
		free(n_dog);
		return (0);
	}
	n_dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (n_dog->owner == 0)
	{
		free(n_dog);
		free(n_dog->name);
		return (0);
	}
	s_copy(n_dog->name, name);
	s_copy(n_dog->owner, owner);
	n_dog->age = age;
	return (n_dog);
}
