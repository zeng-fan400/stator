#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	//����һ������
//	int arr[10] = { 1,2,2 };//����ȫ��ʼ�� - ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5] = { 'a','b' };
//	char arr3[5] = "ab";
//	char arr4[5] = { 'a',98 };
//	char arr5[] = "abcdef";
//	printf("%d\n", sizeof(arr5));
//	//sizeof ���� arr5��ռ�ռ�Ĵ�С
//	//7��Ԫ�� - ����Ϊ7
//	printf("%d\n", strlen(arr4));
//	//�����ַ������ȵ� - ֻ������ַ����󳤶� - �⺯�� - ʹ����Ҫ����ͷ�ļ�
//	//sizeof�ǲ�����
//	return 0;
//}

//int main()
//{
//	//char arr[] = "abcdef";
//	////printf("%c\n", arr[3]);
//	//int i = 0;
//	//int len = strlen(arr);
//	//for (i = 0; i < len; i++)
//	//{
//	//	printf("%c ", arr[i]);
//	//}
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//int arr[3][4] = { 1,2,3,4, 5};//3��4��
//	int arr[3][4] = { {1,2,3},{4,5} };//1 2 3���ڵ�һ�У�4 5���ڵڶ���
//	//char ch[5][6];
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			printf("&a[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//void bubble_sort(int i, int arr[])
//{
//	//ȷ��ð�����������
//	int j = 0;
//	for (j = 0; j < i - 1; j++)
//	{
//		int flag = 1;
//		//ÿһ��ð������
//		int n = 0;
//		for (n = 0; n < i-1-j; n++)
//		{
//			if (arr[n] > arr[n + 1])
//			{
//				int tmp = arr[n];
//				arr[n] = arr[n + 1];
//				arr[n + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//��arr���������ų�����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(sz, arr);//ð������
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);//����ĵ�ַ
//	return 0;
//}

int Jump(int n)//������̨��
{
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 2;
	}
	else
	{
		return Jump(n - 2) + Jump(n - 1);
	}
}
int main()
{
	int i = 0;
	int ret = 0;
	printf("������̨����>��");
	scanf("%d", &i);
	ret = Jump(i);
	printf("һ����%d������\n", ret);
	return 0;
}
