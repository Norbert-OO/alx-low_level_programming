#include <stdio.h>

/**
 * main- entry point
 *
 * Description: 'A program that prints all single digit
 * numbers of base 10 starting from 0, followed by a new line.'
 *
 * Return: 0 always
 */
int main(void)
{
int a = 0;
for (; a < 10 ; a++)
printf("%d", a);
putchar('\n');
return (0);
}
