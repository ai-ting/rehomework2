#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int side1, side2;
	int x;
	for (x = 1; x < 500; x++)
	{
		for (side1 = 1; side1 < x; side1++)
		{
			for (side2 = 1; side2 < x; side2++)
			{
				if (side1*side1 + side2*side2 == x*x)
				{
					printf("%u,%u,%u 是畢氏三元數。\n",x,side1,side2);
				}
			}
		}
	}
	system("pause");
	return 0;
}