#include "function_pointers.h"

/**
*array_iterator - executes a function on each element of an array
*@array: used array
*@size: size of array
*@action: function to be executed
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
