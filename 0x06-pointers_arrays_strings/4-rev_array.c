#include "main.h"

/**
 * reverse_array - A function that reverses the
 * content of an array of integers.
 * @a: Array to be reversed.
 * @n: The numbe of elements in array to be reversed.
 * Return: Returns array reversed
 */
void reverse_array(int *a, int n)
{
	int temp, index;

	for (index = n - 1; index > n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}
