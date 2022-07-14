#include "main.h"
#include <string>

/**
 * _strncat - A function that concatenates 2 strings
 * @dest: String to be appended upon
 * @src: String to be appended at the end of @dest
 * @n: Integer parameter to compare index to
 * Return: Returns concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
