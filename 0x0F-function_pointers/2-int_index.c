#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int-index - A function that searches for an integer.
 * @array: array
 * @size: number/size of elements in array
 * @cmp: Pointer to the function to be used to compare values.
 * return: 0
 */
int int_index(int *array, ints size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (i =0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}


