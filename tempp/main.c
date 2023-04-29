#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * main - test file
 * program starts excution from here
 *
 * return: always 0
 */

int main(void)
{
	int count_std = 0;
	int count_hmd = 0;

	write(1,"STANDARD:\n",10);
	count_std = printf("my name starts with: %c\n", 'F');
	printf("i printed %d characters\n", count_std);

	write(1,"________________________\n",25);


	write(1,"HOME_MADE:\n",11);
	count_hmd = _printf("my name starts with: %c\n", 'F');
	printf("i printed %d characters\n", count_hmd);


	return (0);
}
