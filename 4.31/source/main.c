#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x;
	int y;
	for (x = 1; x <= 5; x++)
	{
		for (y = 1; y <= 5 - x; y++)
		{
			printf(" ");
		}
		for (y = 1; y <x * 2; y++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (x = 4; x >= 1; x--)
	{
		for (y = 1; y <= 5 - x; y++)
		{
			printf(" ");
		}
		for (y = 1; y <x * 2; y++)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}