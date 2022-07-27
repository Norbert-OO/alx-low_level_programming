#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings.
 * If NULL is passed, treat it as an empty string.
 *
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 *
 * Return: Pointer to newly allocated space in memory
 * containing the concatenated string, otherwise
 * returns NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, size, i, j;
	char *nstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	size = len1 + len2;

	nstr = malloc((sizeof(char) * size) + 1);
	if (nstr == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		nstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i <= size)
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}
	return (nstr);
}
