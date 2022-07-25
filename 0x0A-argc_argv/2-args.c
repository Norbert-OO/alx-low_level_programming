#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints all arguments it receives.
 * All arguments are printed, including the first one.
 * Prints only one argument per line, ending with a new line.
 *
 * @argc: Number of arguments
 * @argv: array of arguments.
 *
 * Return: 0 always for success.
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
