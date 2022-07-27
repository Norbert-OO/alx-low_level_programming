#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer
 * to a 2 dimensional array of integers.
 *
 * Each element of the grid is initialized to 0
 * If width or height is 0 or negative, return NULL
 * @width: width of an array
 * @height: Height of an array
 * Return: A pointer to allocated grid otherwise NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(a[j]);
			}
				free(a);
				return (NULL);
			}
		}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
			a[k][l] = 0;
	}
	return (a);
}
