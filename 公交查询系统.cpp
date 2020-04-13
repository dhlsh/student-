
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#define N 1000000
void menu();//菜单
void input();//输入公交车信息
void xiugai();//修改公交车信息
void tianjia();//添加公交车信息
void search();//查询公交车信息

struct  bus //用结构体定义公交车信息
{
	char xianl[100];//公交线路
	char shif[100];//始发站
	char zhongd[100];//终点站
	char zhongt[100];//中途站点
	char time[100];//发车时间
};
struct bus b[N];
int x = 0;//输入的数据总数

int main(void)//主函数
{
	int number;
	while (1)
	{
		system("color 3e");
		menu();
		printf("请选择功能：\n");
		scanf("%d", &number);
		system("cls");
		switch (number)
		{
		case 1: input(); break;//输入公交车信息
		case 2: xiugai(); break;//修改公交车信息
		case 3: tianjia(); break;// 添加公交车信息
		case 4: search(); break;// 查询公交车信息
		case 5:  exit(0); break;// 退出系统  
		}
	}
	return 0;
}
void menu()//菜单函数
{
	printf("  ==============================================\n");
	printf("  ==**                                      **==\n");
	printf("  ==               公交查询系统               ==\n");
	printf("  ==                                          ==\n");
	printf("  ==          1.输入公交车信息                ==\n");
	printf("  ==          2.修改公交车信息                ==\n");
	printf("  ==          3.添加公交车信息                ==\n");
	printf("  ==          4.查询公交车信息                ==\n");
	printf("  ==          5.退出系统                      ==\n");
	printf("  ==**                                      **==\n");
	printf("  ==============================================\n");
}
void input()//输入公交车信息
{
	FILE* f1 = NULL;
	f1 = fopen("gongjiao.txt", "w");//把信息存入gongjiao.txt文件中
	int i;
	printf("请输入共有多少组数据：");
	scanf("%d", &x);
	printf("请输入公交车信息（公交线路，始发站，终点站，中途站点，发车时间）：\n");
	for (i = 0; i < x; i++)
	{
		scanf("%s%s%s%s%s", b[i].xianl, b[i].shif, b[i].zhongd, b[i].zhongt, b[i].time);
		fprintf(f1, "%s %s %s %s %s\n", b[i].xianl, b[i].shif, b[i].zhongd, b[i].zhongt, b[i].time);
	}
}
void xiugai()//修改公交车信息
{
	int i, n;
	char xianl1[100], xianl[100];
	char shif1[100], shif[100];
	char zhongd1[100], zhongd[100];
	char zhongt1[100], zhongt[100];
	char time1[100], time[100];
	printf("---1按公交线路修改 ---2按始发站修改 ---3按终点站修改 ---4按中途站点修改 ---5按发车时间修改\n");
	scanf("%d", &n);
	if (n == 1)
	{
		printf("按公交线路修改\n");
		getchar();
		printf("请输入公交路线:\n");
		scanf("%s", xianl1);
		printf("请输入修改的公交信息:（公交线路，始发站，终点站，中途站点，发车时间） \n");
		for (i = 0; i < x; i++)
		{
			if (strcmp(xianl1, b[i].xianl) == 0)
			{
				scanf("%s%s%s%s%s", xianl, shif, zhongd, zhongt, time);
				strcpy(b[i].xianl, xianl);
				strcpy(b[i].shif, shif);
				strcpy(b[i].zhongd, zhongd);
				strcpy(b[i].zhongt, zhongt);
				strcpy(b[i].time, time);
			}
		}
	}
	if (n == 2)
	{
		printf("按始发站修改\n");
		getchar();
		printf("请输入始发站:\n");
		scanf("%s", shif1);
		printf("请输入修改的公交信息:（公交线路，始发站，终点站，中途站点，发车时间） \n");
		for (i = 0; i < x; i++)
		{
			if (strcmp(shif1, b[i].shif) == 0)
			{
				scanf("%s%s%s%s%s", xianl, shif, zhongd, zhongt, time);
				strcpy(b[i].xianl, xianl);
				strcpy(b[i].shif, shif);
				strcpy(b[i].zhongd, zhongd);
				strcpy(b[i].zhongt, zhongt);
				strcpy(b[i].time, time);
			}
		}
	}
	if (n == 3)
	{
		printf("按终点站修改\n");
		getchar();
		printf("请输入终点站:\n");
		scanf("%s", zhongd1);
		printf("请输入修改的公交信息:（公交线路，始发站，终点站，中途站点，发车时间） \n");
		for (i = 0; i < x; i++)
		{
			if (strcmp(zhongd1, b[i].zhongd) == 0)
			{
				scanf("%s%s%s%s%s", xianl, shif, zhongd, zhongt, time);
				strcpy(b[i].xianl, xianl);
				strcpy(b[i].shif, shif);
				strcpy(b[i].zhongd, zhongd);
				strcpy(b[i].zhongt, zhongt);
				strcpy(b[i].time, time);
			}
		}
	}
	if (n == 4)
	{
		printf("按中途站点修改\n");
		getchar();
		printf("请输入中途站点:\n");
		scanf("%s", zhongt1);
		printf("请输入修改的公交信息:（公交线路，始发站，终点站，中途站点，发车时间） \n");
		for (i = 0; i < x; i++)
		{
			if (strcmp(zhongt1, b[i].zhongt) == 0)
			{
				scanf("%s%s%s%s%s", xianl, shif, zhongd, zhongt, time);
				strcpy(b[i].xianl, xianl);
				strcpy(b[i].shif, shif);
				strcpy(b[i].zhongd, zhongd);
				strcpy(b[i].zhongt, zhongt);
				strcpy(b[i].time, time);
			}
		}
	}
	if (n == 5)
	{
		printf("按发车时间修改\n");
		getchar();
		printf("请发车时间:\n");
		scanf("%s", time1);
		printf("请输入修改的公交信息:（公交线路，始发站，终点站，中途站点，发车时间） \n");
		for (i = 0; i < x; i++)
		{
			if (strcmp(time1, b[i].time) == 0)
			{
				scanf("%s%s%s%s%s", xianl, shif, zhongd, zhongt, time);
				strcpy(b[i].xianl, xianl);
				strcpy(b[i].shif, shif);
				strcpy(b[i].zhongd, zhongd);
				strcpy(b[i].zhongt, zhongt);
				strcpy(b[i].time, time);
			}
		}
	}
	printf("请输出修改后所有公交信息:（公交线路，始发站，终点站，中途站点，发车时间） \n");
	for (i = 0; i < x; i++)
	{
		printf("%s %s %s %s %s \n", b[i].xianl, b[i].shif, b[i].zhongd, b[i].zhongt, b[i].time);
	}
}
void search()//查询公交车信息
{
	int i, n = 0;
	char xianl[100];
	printf("按公交线路查询\n");
	getchar();
	printf("请输入公交路线:");
	scanf("%s", xianl);
	printf("请输出查询到的公交信息:（公交线路，始发站，终点站，中途站点，发车时间） \n");
	for (i = 0; i < x; i++)
	{
		if (strcmp(xianl, b[i].xianl) == 0)
		{
			printf("%s %s %s %s %s\n", b[i].xianl, b[i].shif, b[i].zhongd, b[i].zhongt, b[i].time);
		}
	}
}
void tianjia()//添加公交车信息
{
	FILE* f1 = NULL;
	f1 = fopen("gongjiao.txt", "w");//把信息存入gongjiao.txt文件中
	int i, t;
	printf("请输入新加入多少组信息数据：");
	scanf("%d", &t);
	printf("请输入公交车信息（公交线路，始发站，终点站，中途站点，发车时间）：\n");
	for (i = x; i < x + t; i++)
	{
		scanf("%s%s%s%s%s", b[i].xianl, b[i].shif, b[i].zhongd, b[i].zhongt, b[i].time);
	}
	printf("输出所有的公交信息\n");
	for (i = 0; i < x + t; i++)
	{
		printf("%s %s %s %s %s \n", b[i].xianl, b[i].shif, b[i].zhongd, b[i].zhongt, b[i].time);
		fprintf(f1, "%s %s %s %s %s\n", b[i].xianl, b[i].shif, b[i].zhongd, b[i].zhongt, b[i].time);
	}
}
