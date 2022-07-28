#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//#include "Add.h"

//void Self_add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Self_add(&num);
//	printf("%d\n", num);
//	Self_add(&num);
//	printf("%d\n", num);
//	Self_add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n%10);
//}
//int main()//º¯ÊýµÝ¹éÁ·Ï°
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//µÝ¹é
//	print(num);
//	printf("\n");
//	return 0;
//}

//int my_strlen(char* str)//¼ÆËã×Ö·û´®µÄ³¤¶È
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
		return 0;
}
int main()
{
	char arr[] = "southwest";
	//int len = strlen(arr);
	int len = my_strlen(arr);
	printf("len=%d\n", len);
	return 0;
}