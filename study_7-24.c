#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", password);
		if (strcmp(password , "123456")==0)
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	return 0;
}
//int main()
//{
//	char arr1[] = "welcome to southwest university!!!";
//	char arr2[] = "##################################";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int left = 0;
//	int right = sz-2;
//	//int right=strlen(arr1)-1;//建议求数组长度
//	printf("%s\n", arr2);
//	for (left = 0, right = sz-2; left <right; left++, right--)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");//执行系统命令的一个函数-cls-清空屏幕
//	}
//	//printf("%d\n", sz);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 5;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//		if (left > right)
//			printf("没找到\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}
//int main()//计算1！+2！+...+10！
//{
//	int i = 0;
//	int a = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		a = a * i;
//		sum = sum + a;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()//计算n的阶乘
//{
//	int n = 0;
//	int a = 1;
//	int i = 0;//初始化变量
//	printf("请输入n的值：");
//	scanf("%d", &n);//输入求阶乘的变量的大小
//	for (i = 1; i <= n; i++)
//	{
//		a = a * i;
//	}
//	printf("n的阶乘是：%d\n", a);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i < 11);
//	printf("\n");
//	return 0;
//}
//int main()//变种2 
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()//变种for循环
//{
//	for (; ;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i<= 10; i++)
//	{
//		if (i == 5)
//			continue;
//			//break;
//		printf("%d ", i);
//	}
//	printf("\n");
//	return 0;
//}
//int main()//只打印字符0到字符9之间的字符 
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	/*int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);//输入密码并存放在password数组中
//	//但是缓冲区中还剩下一个\n
//	//我们需要将\n读取一下
//	while ((ch = getchar()) != '\n')//一直读取缓冲区里面的不需要的字符，直到读取到'\n'
//	{
//		;
//	}
//	printf("请确认(Y/N):>");//输入Y或者N
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("密码正确\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}