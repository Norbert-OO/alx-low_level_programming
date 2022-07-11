#include "main.h"
#include <string.h>

/**
 * _strlen - A function that,
 * returns the length of a string.
 * @s: string pointer of string to be checked.
 * Return: Returns length of the string
 */

int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
