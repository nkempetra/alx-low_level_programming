#include "main.h"

/**
*flip_bits - gets the number of bits to flip to get from n to m
*@n: initial number
*@m: final number
*
*Return: the number of flipped bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips = n ^ m;
	int cout = 0;

	while (flips)
	{
		if (flips & 1)
			cout++;
		flips >>= 1;
	}
	return (cout);
}
