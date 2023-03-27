#include "main.h"

void swap_int(int *a, int *b)
{
	int sp = *a;
	int *a = *b;
	int *b = sp;
}
