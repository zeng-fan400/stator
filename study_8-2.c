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
//	//不建立第三个变量
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	//这种算法要考虑整型溢出的问题
//	//当a+b的值超出了int的范围，程序会出现bug
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	//异或的操作可读性差
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//LeetCode算法网站

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