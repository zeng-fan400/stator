#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<stdlib.h>

//int main()//寻找只出现一次的元素
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	/*3 ^ 3 = 0;
//	5 ^ 5 = 0;
//	-- > a^ a = 0;
//	0 ^ 5 = 5;
//	0 ^ 3 = 3;
//	0 ^ a = a;*/
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)//异或的方式
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("%d\n", ret);
//	//for (i = 0; i < sz; i++)//暴力求解法
//	//{
//	//	int count = 0;
//	//	int j = 0;
//	//	for (j = 0; j < sz; j++)
//	//	{
//	//		if (arr[i] == arr[j])
//	//		{
//	//			count++;
//	//		}
//	//	}
//	//	if (count == 1)
//	//	{
//	//		printf("%d\n", arr[i]);
//	//		break;
//	//	}
//	//}
//	return 0;
//}

int main()
{
	char input[20] = { 0 };
	//关机
	//system（）- 专门用来执行系统命令的 
	system("shutdown -s -t 60");

again:
	printf("请注意，你的电脑在1分钟内关机，如果属入“我是猪”，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
