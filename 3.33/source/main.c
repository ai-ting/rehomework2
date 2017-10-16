#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;
	int y;
	int a;
	int b;
	printf("輸入長方形的長:");
	scanf("%d",&x);
	printf("輸入長方形的寬:");
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