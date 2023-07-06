#include "main.h"

/**
 * factorial - returns the value of x raised to the power of y.
 * @n: integer params
 * Return: recursion
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
