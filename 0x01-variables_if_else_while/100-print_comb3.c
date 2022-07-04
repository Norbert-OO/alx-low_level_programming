#include <stdio.h>

/**
 * main - Program entry point
 *
 * Description:'A program that prints all
 * possible different combinations of two digits.'
 *
 * Return: 0 always
 */

int main(void)
{
int i;
int j;
for (i = 10; i <= 19; i++)
{
for (j = 10; j <= 19; j++)
{
if ((j % 10) > (i % 10))
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
if (i != 18 || j != 19)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

