#include "main.h"

/**
 * _memcpy - A function that copies memory area.
 * @dest: Source string
 * @src: string for filling
 * @n: length length of buffer
 * Return: new string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
