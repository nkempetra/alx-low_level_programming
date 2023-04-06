#include "main.h"

/**
 * int factorial - Finds the factorial of a number
 * @n: factorial number
 * return 0
 **/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
