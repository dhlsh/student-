
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#define N 1000000
void menu();//�˵�
void input();//���빫������Ϣ
void xiugai();//�޸Ĺ�������Ϣ
void tianjia();//��ӹ�������Ϣ
void search();//��ѯ��������Ϣ

struct  bus //�ýṹ�嶨�幫������Ϣ
{
	char xianl[100];//������·
	char shif[100];//ʼ��վ
	char zhongd[100];//�յ�վ
	char zhongt[100];//��;վ��
	char time[100];//����ʱ��
};
struct bus b[N];
int x = 0;//�������������

int main(void)//������
{
	int number;
	while (1)
	{
		system("color 3e");
		menu();
		printf("��ѡ���ܣ�\n");
		scanf("%d", &number);
		system("cls");
		switch (number)
		{
		case 1: input(); break;//���빫������Ϣ
		case 2: xiugai(); break;//�޸Ĺ�������Ϣ
		case 3: tianjia(); break;// ��ӹ�������Ϣ
		case 4: search(); break;// ��ѯ��������Ϣ
		case 5:  exit(0); break;// �˳�ϵͳ  
		}
	}
	return 0;
}
void menu()//�˵�����
{
	printf("  ==============================================\n");
	printf("  ==**                                      **==\n");
	printf("  ==               ������ѯϵͳ               ==\n");
	printf("  ==                                          ==\n");
	printf("  ==          1.���빫������Ϣ                ==\n");
	printf("  ==          2.�޸Ĺ�������Ϣ                ==\n");
	printf("  ==          3.��ӹ�������Ϣ                ==\n");
	printf("  ==          4.��ѯ��������Ϣ                ==\n");
	printf("  ==          5.�˳�ϵͳ                      ==\n");
	printf("  ==**                                      **==\n");
	printf("  ==============================================\n");
}
void input()//���빫������Ϣ
{
	FILE* f1 = NULL;
	f1 = fopen("gongjiao.txt", "w");//����Ϣ����gongjiao.txt�ļ���
	int i;
	printf("�����빲�ж��������ݣ�");
	scanf("%d", &x);
	printf("�����빫������Ϣ��������·��ʼ��վ���յ�վ����;վ�㣬����ʱ�䣩��\n");
	for (i = 0; i < x; i++)
	{
		scanf("%s%s%s%s%s", b[i].xianl, b[i].shif, b[i].zhongd, b[i].zhongt, b[i].time);
		fprintf(f1, "%s %s %s %s %s\n", b[i].xianl, b[i].shif, b[i].zhongd, b[i].zhongt, b[i].time);
	}
}
void xiugai()//�޸Ĺ�������Ϣ
{
	int i, n;
	char xianl1[100], xianl[100];
	char shif1[100], shif[100];
	char zhongd1[100], zhongd[100];
	char zhongt1[100], zhongt[100];
	char time1[100], time[100];
	printf("---1��������·�޸� ---2��ʼ��վ�޸� ---3���յ�վ�޸� ---4����;վ���޸� ---5������ʱ���޸�\n");
	scanf("%d", &n);
	if (n == 1)
	{
		printf("��������·�޸�\n");
		getchar();
		printf("�����빫��·��:\n");
		scanf("%s", xianl1);
		printf("�������޸ĵĹ�����Ϣ:��������·��ʼ��վ���յ�վ����;վ�㣬����ʱ�䣩 \n");
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
		printf("��ʼ��վ�޸�\n");
		getchar();
		printf("������ʼ��վ:\n");
		scanf("%s", shif1);
		printf("�������޸ĵĹ�����Ϣ:��������·��ʼ��վ���յ�վ����;վ�㣬����ʱ�䣩 \n");
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
		printf("���յ�վ�޸�\n");
		getchar();
		printf("�������յ�վ:\n");
		scanf("%s", zhongd1);
		printf("�������޸ĵĹ�����Ϣ:��������·��ʼ��վ���յ�վ����;վ�㣬����ʱ�䣩 \n");
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
		printf("����;վ���޸�\n");
		getchar();
		printf("��������;վ��:\n");
		scanf("%s", zhongt1);
		printf("�������޸ĵĹ�����Ϣ:��������·��ʼ��վ���յ�վ����;վ�㣬����ʱ�䣩 \n");
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
		printf("������ʱ���޸�\n");
		getchar();
		printf("�뷢��ʱ��:\n");
		scanf("%s", time1);
		printf("�������޸ĵĹ�����Ϣ:��������·��ʼ��վ���յ�վ����;վ�㣬����ʱ�䣩 \n");
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
	printf("������޸ĺ����й�����Ϣ:��������·��ʼ��վ���յ�վ����;վ�㣬����ʱ�䣩 \n");
	for (i = 0; i < x; i++)
	{
		printf("%s %s %s %s %s \n", b[i].xianl, b[i].shif, b[i].zhongd, b[i].zhongt, b[i].time);
	}
}
void search()//��ѯ��������Ϣ
{
	int i, n = 0;
	char xianl[100];
	printf("��������·��ѯ\n");
	getchar();
	printf("�����빫��·��:");
	scanf("%s", xianl);
	printf("�������ѯ���Ĺ�����Ϣ:��������·��ʼ��վ���յ�վ����;վ�㣬����ʱ�䣩 \n");
	for (i = 0; i < x; i++)
	{
		if (strcmp(xianl, b[i].xianl) == 0)
		{
			printf("%s %s %s %s %s\n", b[i].xianl, b[i].shif, b[i].zhongd, b[i].zhongt, b[i].time);
		}
	}
}
void tianjia()//��ӹ�������Ϣ
{
	FILE* f1 = NULL;
	f1 = fopen("gongjiao.txt", "w");//����Ϣ����gongjiao.txt�ļ���
	int i, t;
	printf("�������¼����������Ϣ���ݣ�");
	scanf("%d", &t);
	printf("�����빫������Ϣ��������·��ʼ��վ���յ�վ����;վ�㣬����ʱ�䣩��\n");
	for (i = x; i < x + t; i++)
	{
		scanf("%s%s%s%s%s", b[i].xianl, b[i].shif, b[i].zhongd, b[i].zhongt, b[i].time);
	}
	printf("������еĹ�����Ϣ\n");
	for (i = 0; i < x + t; i++)
	{
		printf("%s %s %s %s %s \n", b[i].xianl, b[i].shif, b[i].zhongd, b[i].zhongt, b[i].time);
		fprintf(f1, "%s %s %s %s %s\n", b[i].xianl, b[i].shif, b[i].zhongd, b[i].zhongt, b[i].time);
	}
}
