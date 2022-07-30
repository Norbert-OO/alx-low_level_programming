#include "main.h"
/**
 * array_range - A function that creates an array of integers
 *
 * The array created should contain all the values from
 * min (included) to max (included), ordered from min to max
 * If min > max, return NULL
 *
 * If malloc fails, return NULL
 * @min: Minimum value
 * @max: Maximum value
 * Return: Pointer to the newly created array on success.
 */
int *array_range(int min, int max)
{
	int range, i;
	int *p;

	range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);
	p = malloc(range * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < range; i++)
	{
		*(p + i) = min + i;
	}
	return (p);
}
