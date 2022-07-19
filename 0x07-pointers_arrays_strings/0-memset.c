#include "main.h"

/**
 * _memset - A function that fills
 * memory with a constant byte.
 * @s: Source string
 * @b: The constant byte
 * @n: Length of buffer
 * Return: New string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
