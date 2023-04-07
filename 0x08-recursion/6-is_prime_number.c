#include "main.h"

int is_prime_number(int n)
{
	int i;
	for(int i = 2; i <= n / 2; i++)
{
	if(n % i == 0)
		return 0;
}

return 1;
}
