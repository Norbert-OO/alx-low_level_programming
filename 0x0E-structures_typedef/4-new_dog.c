#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of astring
 * @str: The string whose length to be checked.
 *
 * Return: The length of a string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src, including
 * the null byte terminator, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index], index++)
		dest[index} = src[index];

		dest[index] = '\0';

		return (dest);
}

/**
 * new_dog - Creates new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner f the dog.
 *
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner);
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggo = maloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	doggo->name = _strcpy(doggo->name, name);
	doggo->age = age;
	doggo->owner = _strcopy(doggo->owner, owner);

	return (doggo);
}



