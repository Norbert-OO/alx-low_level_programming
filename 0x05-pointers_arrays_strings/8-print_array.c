#include "main.h"
#include <stdio.h>

/**
 * print_array - A function that prints n elements of
 * an array of integers, followed by a new line.
 *
 * @a: Array of integers
 * @n: Number of elements in the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; a[j])
	{
		printf("%d", a[j]);
	if (j != (n - 1))
	{
		printf(", ");
	}
	}
}
printf("\n");
}
