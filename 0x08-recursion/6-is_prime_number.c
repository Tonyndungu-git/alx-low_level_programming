#include "main.h"

int is_prime_helper(int n, int divisor);

/**
 * is_prime_number - function that returns if the input integer is prime.
 * @n: input iteger.
 * Return: int.
 */


int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, 3));
}

/**
 * is_prime_helper - function that returns if the input integer is prime.
 * @n: input iteger.
 * @divisor: integer divisor.
 * Return: int.
 */



int is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, divisor + 2));
}
