#include "main.h"

/**
 * _strspn - A function that gets
 * the length of a prefix substring.
 * @s: Source string
 * @accept: Searching string
 *
 * Return: New string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(s + j) == *(accept + i))
				break;
		}
		if (*(accept + i) == '\0')
			break;
	}
	return (j);
}

