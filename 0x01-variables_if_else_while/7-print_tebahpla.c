#include <stdio.h>
/**
 * main -Program entry point
 * Descrition: 'A program that prints the lowercase
 * alphabet in reverse, followed by a new line.'
 *
 * Return: 0 always
 */
int main(void)
{
char a;
for (a = 'z'; a >= 'a'; a--)
putchar(a);
putchar('\n');
return (0);
}
