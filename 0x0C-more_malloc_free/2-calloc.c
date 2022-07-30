#include <stdlib.h>
#include "main.h"

/**
 * _calloc - A function that allocates memory
 * for an array, using malloc.
 * The _calloc function allocates memory for an
 * array of nmemb elements of size bytes each and
 * returns a pointer to the allocated memory.
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL.
 *
 * @nmemb: number of elememts in array
 * @size: size of elements of array
 *
 * Return: Pointer to allocated memory otherwise
 * NULL if size or nmemb == 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}
	return (p);
}
