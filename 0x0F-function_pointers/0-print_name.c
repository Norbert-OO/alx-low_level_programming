#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - A function that prints name.
 * @name: name
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL  || f == NULL)
		return;
	f(name);
}
