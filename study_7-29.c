#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int Fac(int n)
//{
//	int i = 0;
//	int ret=1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//		return n * Fac(n - 1);
//}
//int main()//函数递归实现求n的阶乘
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//斐波那契数列
//1 1 2 3 5 8 13 21 34 ...
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 2) + Fib(n - 1);
//	}
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &i);
//	sum = Fib(i);
//	printf("%d\n", sum);
//	return 0;
//}

void Move(int i, char a, char b)
{
	printf("%d: %c -> %c\n", i, a, b);
}
void Hanno(int i, char a, char b, char c)
{
	if (i == 1)
	{
		Move(i, a, c);
	}
	else
	{
		Hanno(i - 1, a, c, b);
		Move(i, a, c);
		Hanno(i - 1, b, a, c);
	}
}

int main()
{
	int n = 0;
	char A = 'a';
	char B = 'b';
	char C = 'c';
	scanf("%d", &n);
	Hanno(n, A, B, C);
	return 0;
}
