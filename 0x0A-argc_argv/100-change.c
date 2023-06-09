#include "main.h"

/**
*main - prints the minimum number of coins to make che for an amount of money
*@argc: number of arguments
*@argv: arguments
*Return:1 if there is an error; else returns 0
*/

int main(int argc, char *argv[])
{
int ce, co = 0;

if (argc != 2)
{
	printf("Error\n");
	return (1);
}
ce = atoi(argv[1]);
while (ce > 0)
{
	co++;
	if ((ce - 25) >= 0)
	{
		ce -= 25;
		continue;
	}
	if ((ce - 10) >= 0)
	{
		ce -= 10;
		continue;
	}
	if ((ce - 5) >= 0)
	{
		ce -= 5;
		continue;
	}
	if ((ce - 2) >= 0)
	{
		ce -= 2;
		continue;
	}
	ce--;
}
printf("%d\n", co);
return (0);
}
