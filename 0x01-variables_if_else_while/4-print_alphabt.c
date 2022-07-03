#include <stdio.h>

/**
 * main - entry point
 *
 * Description: 'A program that prints the alphabet
 * in lowercase, followed by a new line.'
 *
 * Return: 0 always
 */

int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (a == 'q' || a == 'e')
{
continue;
}
putchar (a);
}
return (0);
}
