#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	double x;
	double y;
	printf("");
	double a;
	
	for (x = 0.1; x <= 0.125; x += 0.005)
	{
		y = 5000 * pow((1 + x) , 15);
		a = x * 100;
		printf("利率為%lf時: ",x );
		printf("15年來金額由5000元變為:%lf元\n",y);
	}
	system("pause");
	return 0;
}