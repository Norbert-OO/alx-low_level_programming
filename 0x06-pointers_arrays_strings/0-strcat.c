#include"main.h"
#include <string.h>

/**
 * _strcat - Functiona concatenates two strings
 * @dest: Parameter 1
 * @src: Parameter 2
 * Return: A string
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
