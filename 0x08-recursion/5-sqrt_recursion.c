#include "main.h"

/**
 * _sqrt - returns the natural square root of a number
 * @n: number to find the square root of
 * @a: integer to check if it is the square root of n
 * Return: square root of n, or -1 if n does not have a natural square root
 **/

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return(n);
	return (_recursion_sqrt(0, n));
}

/**
 * _recursion_sqrt - returns the square root of a number
 * @n: test number
 * @i: squared number
 *
 * Return: the square root of n
 */

int _recursion_sqrt(int n, int i)
{
	if ((n > i / 2)
		return (-1);
	else if ((n * n) == i)
		return (n);
	return (_recursion_sqrt(n + 1, i));
}
