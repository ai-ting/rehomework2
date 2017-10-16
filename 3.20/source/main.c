#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int hour;
	double money;
	double x;
	printf("Enter # of hours worked(-1 to end):");
	scanf("%d",&hour);
	
	while (hour > 0)
	{
		printf("Enter hourly rate of the worker($00.00):");
		scanf("%lf", &money);
		if (hour <= 40)
		{
			x = hour*money;
			printf("Salary is :$%lf\n",x);
		}
		if (hour > 40)
		{
			x = 40 * money + (hour - 40)*money*1.5;
			printf("Salary is :$%lf\n", x);
		}
		printf("\n");
		printf("Enter # of hours worked(-1 to end):");
		scanf("%d", &hour);
	}

}