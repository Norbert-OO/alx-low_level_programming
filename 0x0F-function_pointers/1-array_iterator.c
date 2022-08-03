#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - A a function that executes a function
 * given as a parameter on each element of an array.
 *
 * @array: is an array
 * @size: is the size
 * @action: is a pointer to the function to be used.
 *
 * Return: Pointer to a function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
