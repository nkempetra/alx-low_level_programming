
Search
Pulls
Issues
Codespaces
Marketplace
Explore
 
@nkempetra 
solokool66
/
alx-low_level_programming
Public
Fork your own copy of solokool66/alx-low_level_programming
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x02-functions_nested_loops/2-print_alphabet_x10.c
@solokool66
solokool66 alphabet
Latest commit 2711448 on Dec 14, 2022
 History
 1 contributor
15 lines (15 sloc)  260 Bytes

#include "main.h"
/**
* print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
*/
void print_alphabet_x10(void)
{
int count = 0;
char letter;
while (count++ <= 9)
{
	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
	_putchar('\n');
}
}
