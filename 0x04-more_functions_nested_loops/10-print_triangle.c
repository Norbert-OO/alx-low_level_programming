#include "main.h"

/**
 * print_triangle - check for digit
 * @size: integer type
 * Return: void
 */

void print_triangle(int size)
{
	int i = 1, t;

	while (i <= size && size > 0)
	{
		t = 0;
		while (t < size - i)
		{
			_putchar(' ');
			t++;
		}
		t = 0;
		while (t < i)
		{
			_putchar('#');
			t++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
