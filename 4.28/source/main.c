#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x;
	int hour;
	int money;
	int b;
	printf("��J���u�N�X(1.�g�z�H��2.���~�u3.��Ī��u4.�s�u):");
	scanf("%d", &x);
	while (x > 0)
	{
		switch (x)
		{
			case 1:
				printf("�A���T�w�g�~�C\n");
				break;
			case 2:
				printf("��J�@�g���u�@�ɼ�:");
				scanf("%d", &hour);
				printf("��J���~:"); 
				scanf("%d",&money);
				if (hour <= 40)
				{
					b = money*hour;
					printf("�A���g�~��:%d\n",b);
				}
				else
				{
					b = 40 * money + (hour - 40)*money*1.5;
					printf("�A���g�~��:%d\n", b);
				}
				break;
			case 3:
				printf("��J�@�g���P����B:");
				scanf("%d",&money);
				b = 250 + money*0.57;
				printf("�A���g�~��:%d\n", b);
				break;
			case 4:
				printf("�A���g�~�O���ӨC�g�Ͳ���ƭp�S(��@�@��)�C");
				break;
			default:
				printf("�A��J�����u�N�X���s�b!");
				break;
		}
		printf("\n");
		printf("��J���u�N�X(1.�g�z�H��2.���~�u3.��Ī��u4.�s�u):", x);
		scanf("%d", &x);

	}
}