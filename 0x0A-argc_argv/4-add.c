#include "main.h"

int main(int argc, char *argv[]) 
{
	int sum = 0;
	if (argc == 1) 
	{
		printf("%d\n", sum);
		return 0;
	}
	for (int i = 1; i < argc; i++) 
	{
		char *num = argv[i];
		for (int j = 0; num[j] != '\0'; j++) 
		{
			if (!isdigit(num[j])) 
			{
				printf("Error\n");
				return 1;
			}
		}
		sum += atoi(num);
	}
	printf("%d\n", sum);
	return 0;
}
