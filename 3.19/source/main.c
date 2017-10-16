#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int day;
	double b;
	double x;

	printf("Enter loan principal(-1 to end):");
	scanf("%d",&a);
	
	while (a > 0)
	{
		if (a > -1)
		{
			printf("Enter interest rate:");
			scanf("%lf", &b);
			printf("Enter term of the loan in days:");
			scanf("%d", &day);

			x = a*b*day / 365;

			printf("The interest charge is :$%lf\n", x);
		}
		printf("\n");
		printf("Enter loan principal(-1 to end):");
		scanf("%d", &a);
	}

}