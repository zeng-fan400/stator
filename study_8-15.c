#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	/*int a = 0;
//	char b = 'w';
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));*/
//	return 0;
//}

//int main()
//{
//	int a = 11;
//	int b = a || (1 << 2);
//	//~按（二进制）位取反
//	/*printf("%d\n", ~a);*/
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", ++a);//先++，在使用
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//强制类型转换
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	if (a > 5)
		b = 3;
	else
		b = -3;
	b = (a > 5 ? 3 : -3);//三目操作符
	return 0;
}