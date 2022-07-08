#include <stdio.h>

/**
 * main - program entry point
 *
 * Description: A  program that prints the
 * numbers from 1 to 100,followed by a new
 * line. But for multiples of three print Fizz
 * instead of the number and for the multiples
 * of five print Buzz. For numbers which are
 * multiples of both three and five print FizzBuzz.
 *
 * Return: "Fizz" or "Buzz" or "FizzBuzz"or number.
 */

int main(void)
{
int i = 100;
int j;
while (j <= i)
{
if (j % 3 == 0 && j % 5 == 0)
{
printf("FizzBuzz ");
}

else if (j % 3 == 0)
{
printf("Fizz ");
}

else if (j % 5 == 0)
{
if (j < i)
printf("Buzz ");

else
printf("Buzz");
}

else
{
printf("%i ", j);
}

j++;
}
printf("\n");
return (0);
}
