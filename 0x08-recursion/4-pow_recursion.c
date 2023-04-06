#include "main.h"

/*
 * int _pow_recursion - implementation of exponentiation by recursion
 * @x: the number to be raised to power y
 * @y: the power number of x
 * Return: the value of x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
