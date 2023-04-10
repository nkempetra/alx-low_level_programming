#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i;
	(void) argc;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}
