#include <stdio.h>

/**
 * main - prints the number of arguments passed.
 * @argc: number of arguments passed to the program
 * @argv: an array of strings representing the arguments 
 *
 * Return: 0.  
 */

int main(int argc, char* argv[])
{
        int i;
        (void) argv;
        for (i = 0; i < argc; i++)
        {
                printf("%d\n", argc);
        }
        return 0;
}    
