#include "main.h"

/**
 * print_sign -'A function that
 * prints the sign of a number.'
 * @n: parameter to be checked
 * Return: 1, 0, -1 basing on condition
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
}
