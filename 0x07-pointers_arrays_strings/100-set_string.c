#include "main.h"

/**
 * set_string - A function that
 * sets the value of a pointer to a char.
 * @s: Pointer to pointer
 * @to: pointer to char.
 *
 * Return: void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
