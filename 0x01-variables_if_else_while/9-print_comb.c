#include <stdio.h>

/**
 * main - Program entry point
 *
 * Description:'A program that prints all
 * possible combinations of single-digit numbers.'
 *
 * Return: 0 always
 */

int main(void)
{
int x;
for (x = 48; x <= 57; x++)
{
putchar(x);
if (x != 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
}
