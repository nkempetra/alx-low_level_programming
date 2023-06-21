#include "function_pointers.h"

/**
*int_index - searches for an integer
*@array: Array of  elements
*@size: number of elements in array
*@cmp: function which compare values
*
*Return: returns -1 if no element match
* or when size is less than zero
*return pointer to the first corresponding element
*
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
