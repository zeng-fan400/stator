#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>

int main()//��1-100��9���ֵĴ���
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		j = i + 1;
		int a = i / 10;
		if (j % 10 == 0 )
		{
			count++;
		}
		if (a == 9)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)
//			break;
//		if (b % 3 == 1)
//		{
//			b = b + 3; 
//			continue;
//		}
//		b = b + 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main()//Ѱ�������ĸĽ��㷨 
//{
//	int i = 0;
//	int count = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for(j=2;j<=sqrt(i);j++)
//			if (i % j == 0)
//			{
//				break;
//			}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	printf("%d\n", count);
//	return 0;
//}

//int main()//��ӡ100-200֮�������
//{
//	int i = 0;
//	int j = 0;
//	int a = 1;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= i; j++)
//		{
//			a = i % j;
//			if (a == 0)
//			{
//				if (j != i)
//				{
//					break;
//				}
//				else
//					printf("%d ", i);
//			}
//		}
//	}
//	printf("\n");
//	return 0;
//}

//int main()//��ӡ1000-2000��֮�������
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0)
//		{
//			if (i % 100 != 0)
//			{
//				printf("%d ", i);
//				count++;
//			}
//			else if (i % 400 == 0)
//			{
//				printf("%d ", i);
//				count++;
//			}
//		}
//	}
//	printf("\n");
//	printf("%d\n", count);
//	return 0;
//}

//int main()//�������������Լ��
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	printf("������a��b��ֵ��");
//	scanf("%d%d", &a, &b);
//	if (a / b == 0)
//	{
//		while (c!=0)
//		{
//			c = b % a;
//			b = a;
//			a = c;
//		}
//		printf("%d\n", b);
//	}
//	else
//	{
//		while (c != 0)
//		{
//			int c = a % b;
//			a = b;
//			b = c;
//		}
//		printf("%d\n", a);
//	}
//	return 0;
//}

//int main()//��ӡ1-100��3�ı�������
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	printf("\n");
//	return 0;
//}

//int main()//���������Ӵ�С���
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	printf("������a��b��c��ֵ��");
//	scanf("%d,%d,%d", &a, &b, &c);
//	if (a - b >= 0)
//	{
//		if (a - c >= 0)
//		{
//			if (b - c >= 0)
//			{
//				x = a;y = b; z = c;
//			}
//			else
//			{
//				x = a; y = c; z = b;
//			}
//		}
//		else
//		{
//			x = c; y = a; z = b;
//		}
//	}
//	else
//	{
//		if (b - c >= 0)
//		{
//			if (a - c >= 0)
//			{
//				x = b; y = a; z = c;
//			}
//			else
//			{
//				x = b; y = c; z = a;
//			}
//		}
//		else
//		{
//			x = c; y = b; z = a;
//		}
//	}
//	printf("�����%d,%d,%d\n", x, y, z);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}