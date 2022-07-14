#include "main.h"

/**
 * _strncpy - A function that copies a string.
 * @dest: stored string copy
 * @src: The source string
 * @n: maximum number of bytes copied
 * Return: String
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
