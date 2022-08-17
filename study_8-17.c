#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a[10] = { 0 };
//	a[4] = 10;
//	return 0;
//}

//int Get_Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入x与y的值>:");
//	scanf("%d%d", &x, &y);
//	int c = Get_Max(x, y);//调用函数的时候的()就是函数调用操作符
//	printf("%d\n", c);
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	//使用structStu这个类型创建了一个学生对象s1，并初始化
//	struct Stu s1 = { "张三",20,"548154815212" };
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//	/*printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", (*ps).id);*/
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	return 0;
//}

//int main()//隐式类型转换
//{
//	char a = 3;
//	//0000 0000 0000 0000 0000 0000 0000 0011
//	//0000 0011 - 截断 内存不够
//	char b = 127;
//	//0000 0000 0000 0000 0000 0000 0111 1111
//	//0111 1111
//	char c = a + b;
//	//0000 0000 0000 0000 0000 0000 0000 0011
//	//0000 0000 0000 0000 0000 0000 0111 1111
//	//0000 0000 0000 0000 0000 0000 1000 0010
//	//1000 0010 - 补码
//	//1000 0001 - 反码
//	//1111 1110 - 原码
//	printf("%d\n", c);
//	return 0;
//}

int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));
	printf("%u\n", sizeof(+c));
	printf("%u\n", sizeof(!c));
	return 0;
}
 