#include "main.h"

/**
 * helperFunction - Returns 0 or 1 dependeing on the condition.
 * @num: Number being checked
 * @i:Possible facor of the number.
 *
 * Return: 0 if not prime, 1 if prime.
 */
int helperFunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - checks if number i prime number or not.
 * @n: Number to be checked
 *
 * Return: 1 if number is prime, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
	}
}
