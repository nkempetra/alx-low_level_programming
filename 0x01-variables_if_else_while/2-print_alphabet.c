#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
