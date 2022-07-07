#include "main.h"

/**
 * print_most_numbers - A function that prints the
 * numbers, from 0 to 9, followed by a new line.
 * Description: Excludes the numbers 2 and 4
 * Return: The numbers not excluded
 */
void print_most_numbers(void)
{
	int  n = 0;

	for (; n < 9; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		else
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
