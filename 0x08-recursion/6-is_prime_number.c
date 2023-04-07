#include "main.h"

int is_prime_number(int n)
{
    int i;
    if (n < 2) 
    { // A prime number must be greater than 1
        return 0;
    }
    for (i = 2; i*i <= n; i++) 
    {
        if (n % i == 0) 
	{ // If n is divisible by i, then it's not a prime number
            return 0;
        }
    }
    return (1);
}
