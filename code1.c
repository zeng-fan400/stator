#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	int ch = 0;
	//ctrl+Z
	//EOF - end of file -> -1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	/*int ch = getchar();
	putchar(ch);*/
	return 0;
}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d, n=%d", m, n);
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}
//int main()//输出1-100之间的奇数
//{
//	int i = 1;
//	int a = 0;
//	while (i <= 100)
//	{
//		a = i % 2;
//		if (a == 0)
//			i++;
//		else
//		{
//			printf("%d\n", i);
//			i++;
//		}
//	}
//	return 0;
//}
//int main()//判断一个数是不是奇数
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	b = a % 2;
//	if (b == 0)
//		printf("%d不是奇数\n", a);
//	else
//		printf("%d是奇数\n", a);
//	return 0;
//}
// = 赋值符号  == 判断相等
//int main()//分支语句中使用代码块的方式
//{
//	int age = 0;
//	printf("一个人的年龄是：");
//	scanf("%d", &age);
//	printf("正常来说他现在应该：");
//	if (age < 18)
//	{
//		printf("是未成年人\n");
//		printf("朝气蓬勃\n");
//	}
//	else if (age >= 18 && age < 22)
//	{
//		printf("读大学\n");
//		printf("明确自己人生的方向\n");
//	}
//	else if (age >= 22 && age < 55)
//	{
//		printf("搞钱\n");
//		printf("搞学术\n");
//	}
//	else if (age >= 55 && age < 100)
//	{
//		printf("退休养老\n");
//		printf("跳广场舞\n");
//	}
//	else
//	{
//		printf("修仙\n");
//		printf("成为仙人\n");
//	}
//	return 0;
//}
//int main()//加入scanf函数输入一个人的年龄，同时尝试分支语句的新写法
//{
//	//int age = 20;
//	//int age = 10;
//	//int age = 200;
//	int age = 0;
//	printf("有一个人，他的年龄是：\n");
//	scanf("%d", &age);
//	printf("那么他是个：");
//	if (age < 18)
//		printf("未成年\n");
//	else
//	{
//		if (age >= 18 && age < 28)
//			printf("青年\n");
//		else if (age >= 28 && age < 50)
//			printf("壮年\n");
//		else if (age >= 50 && age < 90)
//			printf("老年\n");
//		else
//			printf("仙人\n");
//	}
//	int main()//多分支语句
//	{
//		int age = 15;
//	/*if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("仙人\n");*/
//	return 0;
//}
	//int main()//if语句基本使用方式
	//{
		//int age = 10;
	/*if (age < 18)
		printf("未成年\n");
	else 
		printf("成年\n");*/
	//return 0;
//}