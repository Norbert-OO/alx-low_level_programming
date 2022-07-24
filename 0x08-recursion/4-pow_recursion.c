#include "main.h"

/**
 * _pow_recursion - A function that returns the
 * value of x raised to the power of y.
 * @x: First parameter
 * @y: Second parameter
 * Return: First parameter raised to the power
 * of the second parameter.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
