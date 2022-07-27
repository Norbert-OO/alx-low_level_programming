#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - A function that returns a pointer
 * to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 *
 * @str: String to be duplicated.
 *
 * Return: A pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i = 1, j = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	s = (char *)malloc(i * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
