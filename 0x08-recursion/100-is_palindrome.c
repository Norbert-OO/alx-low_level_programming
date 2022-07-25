#include "main.h"

/**
 * _strlen_recursion - size
 * @s: Pointer to string parameter
 * Return: recursion
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - palindrome
 * @s: Pointer to string
 * @l: Position
 * Return: Boolean
 */
int p1(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (p1(s + 1, l - 2));
	}
	return (0);
}
/**
 * is_palindrome - palindrome
 * @s: Pointer to string
 * Return: Recursion
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}

