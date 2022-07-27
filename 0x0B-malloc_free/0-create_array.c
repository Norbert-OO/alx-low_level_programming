#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - A function that creates an array of chars
 * and initializes it with a specific char.
 * @size: size of unsigned integer.
 * @c: Character an array is iniialized with.
 *
 * Return: Returns a pointer to the array,
 * otherwise return NULL if size = 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
