#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	unsigned int a;
	unsigned int b;
	unsigned int c;
	for (a = 1; a <11; a++)
	{
		for (b = 11; b>a; b--)
		{
			printf("%s", " ");
		}
		for (c = 0; c<a; c++)
		{
			printf("%s", "*");
		}

		printf("\n");

	}

	system("pause");
	return 0;
}