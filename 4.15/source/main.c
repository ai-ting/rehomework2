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
		printf("�Q�v��%lf��: ",x );
		printf("15�~�Ӫ��B��5000���ܬ�:%lf��\n",y);
	}
	system("pause");
	return 0;
}