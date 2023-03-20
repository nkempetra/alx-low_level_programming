#include <stdio.h>
int main(void)
{
char ab, AB;
for (ab = 'a'; ab <= 'z'; ab++)
{
putchar(ab);
}
for (AB = 'A'; AB <= 'Z'; AB++)
{
putchar(AB);
}
putchar('\n');
return (0);
}
