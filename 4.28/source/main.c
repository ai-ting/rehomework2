#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x;
	int hour;
	int money;
	int b;
	printf("輸入員工代碼(1.經理人員2.時薪工3.抽傭金工4.零工):");
	scanf("%d", &x);
	while (x > 0)
	{
		switch (x)
		{
			case 1:
				printf("你為固定週薪。\n");
				break;
			case 2:
				printf("輸入一週的工作時數:");
				scanf("%d", &hour);
				printf("輸入時薪:"); 
				scanf("%d",&money);
				if (hour <= 40)
				{
					b = money*hour;
					printf("你的週薪為:%d\n",b);
				}
				else
				{
					b = 40 * money + (hour - 40)*money*1.5;
					printf("你的週薪為:%d\n", b);
				}
				break;
			case 3:
				printf("輸入一週的銷售金額:");
				scanf("%d",&money);
				b = 250 + money*0.57;
				printf("你的週薪為:%d\n", b);
				break;
			case 4:
				printf("你的週薪是按照每週生產件數計酬(單一一種)。");
				break;
			default:
				printf("你輸入的員工代碼不存在!");
				break;
		}
		printf("\n");
		printf("輸入員工代碼(1.經理人員2.時薪工3.抽傭金工4.零工):", x);
		scanf("%d", &x);

	}
}