#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	
	printf("Enter sales in dollars(-1 to end):");
	scanf("%d", &a);
	while (a > 0)
	{
		if (a > 0)
		{
			int x;
			x = 200 + a*0.09;
			printf("Salary is: $%u\n", x);

		}
		printf("\n");
		printf("Enter sales in dollars(-1 to end):");
		scanf("%d", &a);
	}
	
}