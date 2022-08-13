#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 5 / 2;//商2余1
//	printf("a=%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 16;
//	//>>--右移操作符
//	//移动的是二进制位
//	//右移操作符：
//	//1.算数右移：
//	//右边丢弃，左边补原符号位
//	//2.逻辑右移
//	//右边丢弃，左边补零
//	int b = a >> 1;
//	printf("a=%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	//<< -- 左移操作符
//	//左边丢弃，右边补零
//	printf("a=%d\n", b);
//	return 0;
//}

//int main()
//{
//	/*int a = 3;
//	int b = 5;
//	int c = a & b;*/
//	//按位与操作方式：
//	// 对应的二进制位只要有零就为零，两个都为一才取一
//	//010100
//	//110011
//	//010000
//	/*int a = 3;
//	int b = 5;
//	int c = a | b;*/
//	//按位或：
//	//对应的二进制位只要有一就为一，两个都为零才为零
//	//0011101
//	//1011010
//	//1011111
//	int a = 5;
//	int b = 3;
//	int c = a ^ b;//异或，对应的二进制位相同位0，相异为1
//	printf("c=%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//011
//	//101
//	// 110
//	//101
//	//001
//	//101
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*///这种方式可能会溢出
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n", a,b);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	/*while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}*/
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

int main()
{
	int a = 10;
	char c = 'r';
	char* p = &c;
	int arr[10] = { 10 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(c));
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(arr));
	return 0;
}