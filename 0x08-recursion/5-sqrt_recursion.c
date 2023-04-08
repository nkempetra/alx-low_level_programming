#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be used
 *
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_recursion(0, n));
}

/**
 * sqrt_recursion - returns the square root of a number
 * @n: test number
 * @m: squared number
 *
 * Return: the square root of n
 */

int sqrt_recursion(int n, int m)
{
	if (n > m / 2)
		return (-1);
	else if (n * n == m)
		return (n);
	return (sqrt_recursion(n + 1, m));
}
