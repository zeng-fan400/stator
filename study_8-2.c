#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int a = 2;
//	int b = 4;
//	/*int c = 0;
//	c = a;
//	a = b;
//	b = c;*/
//	//����������������
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	//�����㷨Ҫ�����������������
//	//��a+b��ֵ������int�ķ�Χ����������bug
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	//���Ĳ����ɶ��Բ�
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//LeetCode�㷨��վ

//int Find(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = i + 1; j < sz; j++)
//		{
//			while (arr[i] != arr[j])
//			{
//				if (j != (sz - 1))
//				{
//					continue;
//				}
//				else
//				{
//					return arr[i];
//				}
//			}
//		}
//	}
//}
int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int j = 0;
	for (i = 0; i < sz; i++)
	{
		for (j = i + 1; j < sz; j++)
		{
			if (arr[i] != arr[j])
			{
				if (j != (sz - 1))
				{
					continue;
				}
				else
				{
					printf("%d\n", arr[i]);
					exit(0);
				}
			}
			else
			{
				break;
			}
		}
	}
	//int ret = Find(arr, sz);
	return 0;
}