#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;
	int y;
	int a;
	int b;
	printf("��J����Ϊ���:");
	scanf("%d",&x);
	printf("��J����Ϊ��e:");
	scanf("%d",&y);
	for (a = 0; a < y; a++)
	{
		for (b = 0; b < x; b++)
		{
			if ((a == 0) || (a == (y-1)) || (b == 0) || (b == (x-1)))
			{
				printf("%s","+");
			}
			else
			{
				printf(" ");
			}
		}	
		printf("\n");
	}
	system("pause");
	return 0;
}