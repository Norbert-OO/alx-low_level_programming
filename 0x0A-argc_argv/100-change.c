#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the minimum number
 * of coins to make change for an amount of money.
 * Usage: ./change cents
 *
 * where cents is the amount of cents you need to give back
 *
 * If the number of arguments passed to your program is not
 * exactly 1, print Error, followed by a new line, and return 1
 *
 * You should use atoi to parse the parameter passed to your program
 *
 * If the number passed as the argument is negative,
 * print 0, followed by a new line.
 *
 * You can use an unlimited number of coins of values
 * 25, 10, 5, 2, and 1 cent.
 *
 * @args: Parameter entry
 * @argv: one number of arguments
 * Return: 0
 */

int main(int args, char *argv[])
{
	int c, coins = 0;

	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	if (c < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; c >= 0;)
	{
		if (c >= 25)
			c -= 25;
		else if (c >= 10)
			c -= 10;
		else if (c >= 5)
			c -= 5;
		else if (c >= 2)
			c -= 2;
		else if (c >= 1)
			c -= 1;
		else
			break;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
