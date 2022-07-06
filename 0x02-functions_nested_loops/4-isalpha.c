#include "main.h"

/**
 * _isalpha - checks whether a character is an alphabet
 * @c: a character to be checked
 * Return: 0 or 1 dependeing on the condition
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
