#include "main.h"

/**
 * _sqrt - returns the natural square root of a number
 * @n: number to find the square root of
 * @a: integer to check if it is the square root of n
 * Return: square root of n, or -1 if n does not have a natural square root
 **/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return -1;
	}
	if (n == 0 || n == 1)
	{
		return(1);
	}

	int i = 1;

	while (i <= n)
	{
		i++;
		result = i * i;
	}
	return i - 1;
}
