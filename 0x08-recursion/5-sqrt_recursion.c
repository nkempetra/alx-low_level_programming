#include "main.h"

/**
 * _sqrt_recursion - function returns the natural square root of a number.
 *
 * @n: number to find its square root
 *
 * Return: the natural square root, If n does not have a
 * natural square root, the function should return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if ((n == 0) || (n == 1))
		return (n);
	else
		return (_recursion_sqrt(n, 0));
}
/**
 * _recursion_sqrt - calculate square
 *
 * @n: integer
 * @i: integer
 *
 * Return: square
 */

int _recursion_sqrt(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	else if ((i * i) == n)
		return (i);
	else
		return (_recursion_sqrt(n, i + 1));
}
