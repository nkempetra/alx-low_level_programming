#include "main.h"

/**
 * print_dec - prints a given integer from variadic parameters to base 10
 * @args: variadic parameter
 *
 * Return: number of character
 */

int print_dec(va_list args)
{
	int i = 0;
	int count = 0;
	int num;
	int my_arr[10];
	char x[1];

	/*Fetch integer from variadic parameters*/
	num = va_arg(args, int);

	/*Break the numbers apart and assign them to array*/
	while (num != 0)
	{
		my_arr[i] = (num % 10);
		num = num / 10;
		if (num == 0)
			break;
		else
			i++;
	}

	/*Write the contents of the array to stdout*/
	for (i; i >= 0; i--)
	{
		x[0] = ('0' + my_arr[i]); /*Convert int to char*/
		count += write(1, x, 1);
	}

	return (count);
}
