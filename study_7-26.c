#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

//写一个猜数字游戏
//电脑会生成一个随机数
//猜数字

//void menu()
//{
//	printf("*********************************\n");
//	printf("****      1. play         0. exit         ****\n");
//	printf("*********************************\n");
//}
//
//void game()
//{
//	//生成随机数
//	//猜数字
//	int ret = 0;
//	int guess = 0;//接受玩家猜的数字
//	//拿时间戳来设置随机数的生成起点
//	//time_t time (time_t *timer)
//	//time_t
//	ret = rand()%100+1;//生成1-100之间的随机数
//	while (1)
//	{
//		printf("请猜数字：>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0; 
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入无效\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//int main()//二分查找法
//{
//	int arr[7] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int k = 10;
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (k > arr[mid])
//		{
//			left = mid+1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid-1;
//		}
//		else
//		{
//			printf("%d\n", mid);
//			break;
//		}
//		if (left > right)
//			printf("找不到。\n");
//	}
//	return 0;
//}

//int main()//在屏幕上面输出乘法口诀表
//{
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			a = i * j;
//			printf("%d*%d=%-2d ", i, j, a);//%-2d代表输出为两位数，
//			//达不到两位数用空格补齐，有负号左对齐，没有右对齐。
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()//求十个整数中的最大值
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int a = 0;
//	int max = 0;
//	printf("请输入10个整数：");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (a = 1; a < 10; a++)
//	{
//		if (max < arr[a])
//		{
//			max = arr[a];
//		}
//	}
//	printf("最大值是：%d\n", max);
//	return 0;
//}

//int main()//计算1/1-1/2+1/3-......+1/99-1/100的值
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//	return 0;
//}

//int main()
//{
//again:
//	printf("hello\n");
//	goto again;
//	return 0;
//}

int main()//关机程序 -- goto语句应用场景
{
	char input[20] = { 0 };
	//shutdown -s -t 60
	//system() - 执行系统命令
	system("shutdown -s -t 60");
	again:
	printf("请注意，你的电脑将在60s后关机，如果输入：不要关机，就取消关机\n请输入：");
	scanf("%s", input);
	if (strcmp(input, "不要关机") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}