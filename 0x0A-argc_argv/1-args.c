#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed.
 * @argc: Count arguments.
 * @argv: Arguments.
 *
 * Return: Always 0 (Success) 
 */

int main(int argc, char *argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
