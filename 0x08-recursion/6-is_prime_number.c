#include "main.h"

/**
 * divisor - if the number is a prime number
 * @n: integer params
 * @i: integer params
 * Return: boolean
 */
int tmp_prime(int n, int i);
int divisor(int n)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (divisor(n + 2, m));
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - is prime
 * @n: integer params
 * Return: recursion
 */
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisor(3, n));
	}
}
