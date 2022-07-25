#include "main.h"

/**
 * _length - Function checks the length of a string.
 * @s: String to be checked
 * Return: The length of a string.
 */
int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}

/**
 * checkp - Function checks if the string is pallindrome.
 * @i: Is the index
 * @lg: Is the length of the string
 * @s: Is the string
 * Return: 1 if pallindrome or 0 if not
 */

int checkp(int i, int lg, char *s)
{
	if (lg > 0)
	{
		else if (s[1] != s[lg])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

