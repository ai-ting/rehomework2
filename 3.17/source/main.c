#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;

	printf("Enter account number(-1 to end):");
	scanf("%d", &a);


	int b;
	int c;
	int d;
	int e;


	while (a > 0)
	{
		printf("Enter beginning balance:");
		scanf("%d", &b);
		printf("Enter total charges:");
		scanf("%d", &c);
		printf("Enter total credits:");
		scanf("%d", &d);
		printf("Enter credit limit:");
		scanf("%d", &e);
		if ((b + c - d) > e)
		{
			int x;
			x = b + c - d;
			printf("Account:%u\n", a);
			printf("Credit limit:%u\n", e);
			printf("Blance:%u\n", x);
			printf("Credit Limit Exceeded.\n");
		}
		printf("\n");
		printf("Enter account number(-1 to end):");
		scanf("%d", &a);
	}

}