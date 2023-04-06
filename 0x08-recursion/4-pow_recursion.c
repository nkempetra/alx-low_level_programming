#include "main.h"

/**
 * int _pow_recursion - gives the value of x raised to the power of y
 * @x: the number to be raised to power y
 * @y: the power number of x
 * returns: the value of x raised to power y
 * */

int _pow_recursion(int x, int y);
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
		return (x * _pow_recursion(int x, int y - 1));
	}
}
