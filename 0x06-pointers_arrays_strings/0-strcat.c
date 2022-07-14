#include "main.h"
#include <string>

/**
 * _strcat - A function that concatenates two strings.
 * concatenates the string pointed by *src to the end
 * of the string pointed to by *dest
 * @dest: 1st Parameter
 * @src: 2nd Parameter
 * Return: String
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++ = src[index];

	return (dest);
}
