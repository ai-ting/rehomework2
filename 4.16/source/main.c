#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	unsigned int a;
	unsigned int b;
	unsigned int c;
	printf("(A)");
	for (a = 0; a <= 10; a++)
	{
		for (b = 0; b<a; b++)
		{
			printf("%s", "*");
		}
		printf("%s", "\n");
	}
	printf("(B)\n");
	for (a = 0; a <= 10; a++)
	{
		for (b = 10; b>a; b--)
		{
			printf("%s", "*");
		}
		printf("%s", "\n");
	}
	printf("(C)\n");
	for (a = 1; a <11; a++)
	{
		for (b = 0; b<a; b++)
		{
			printf("%s", " ");
		}
		for (c = 11; c>a; c--)
		{
			printf("%s", "*");
		}

		printf("\n");

	}
	printf("(D)\n");
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