#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()//函数strcpy的用法
//{
//	char arr1[] = "bit";
//	char arr2[20] = "###########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//strcpy - 字符串拷贝
//	//strlen - string length - 字符串长度有关
//	return 0;
//}

//int main()/*memset函数的使用*/
//{
//	char arr[] = "We should study hard every day!!!";
//	memset(arr, '*', 2);
//	printf("%s\n", arr);
//	return 0;
//}

//int Max(int x, int y)/*函数：找出两个数的最大值*/
//{
//	if (x >= y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入需要比较的数值>：");
//	scanf("%d %d", &a, &b);
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

/*如何交换两个数的值*/
//void Change1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Change2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入需要交换的数值>：");
//	scanf("%d %d", &a, &b);
//	/*Change1(a, b);
//	printf("交换后：a=%d b=%d\n", a, b);*/
//	Change2(&a, &b);
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}

//int Is_prime(int i)
//{
//	int z = 0;
//	for (z = 2; z <= i; z++)
//	{
//		int a = i % z;
//		if (a == 0 && z!=i)
//		{
//				printf("%d不是素数\n", i);
//				break;
//		}
//		else
//		{
//			printf("%d是素数\n", i);
//		}
//	}
//}
// int Is_prime1(int i)
//{
//	int z = 0;
//	for (z = 2; z <= i; z++)
//	{
//		int a = i % z;
//		if (a == 0 && z != i)
//		{
//			return 0;
//			break;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	printf("输入i的值>:%d\n", i);
//    scanf("%d", &i);
//	Is_prime(i);
//	int j = Is_prime1(i);
//	switch (j)
//	{
//	case 0:
//		printf("%d不是素数\n",i);
//		break;
//	case 1:
//		printf("%d是素数\n",i);
//		break;
//	}
//	return 0;
//}

/*判断闰年的函数*/
//int Is_leap_year(int i)
//{
//	if (i % 4 == 0 && i % 100 != 0)
//	{
//		return 1;
//	}
//	else if (i % 400 == 0)
//	{
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (Is_leap_year(i) == 1)
//		{
//			printf("%d ",i);
//		}
//	}
//	printf("\n");
//	return 0;
//}

int Binary_search(int arr[], int i, int sz)
{
	int left = 0;
	int right = 0;
	right = sz - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (i > arr[mid])
		{
			left = mid + 1;
		}
		else if (i < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			return mid;
			break;
		}
	}
	if (left > right)
	{
		return -1;
	}
}
int main()
{
	int arr[7] = { 1,2,3,4,5,6,7 };
	int i = 5;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = Binary_search(arr, i, sz);
	if (k == -1)
	{
		printf("没找到\n");
	}
	else
		printf("找到了，下标是：%d\n", k);
	return 0;
}