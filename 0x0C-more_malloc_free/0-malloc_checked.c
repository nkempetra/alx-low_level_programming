#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of the memory block to be allocated.
 *
 * Return: pointer to the address of the memory block or if malloc
 * fails it terminates with a status value of 98.
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if(mem == NULL)
		exit(98);
	return(mem);
}
