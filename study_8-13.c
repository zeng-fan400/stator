#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 5 / 2;//��2��1
//	printf("a=%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 16;
//	//>>--���Ʋ�����
//	//�ƶ����Ƕ�����λ
//	//���Ʋ�������
//	//1.�������ƣ�
//	//�ұ߶�������߲�ԭ����λ
//	//2.�߼�����
//	//�ұ߶�������߲���
//	int b = a >> 1;
//	printf("a=%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	//<< -- ���Ʋ�����
//	//��߶������ұ߲���
//	printf("a=%d\n", b);
//	return 0;
//}

//int main()
//{
//	/*int a = 3;
//	int b = 5;
//	int c = a & b;*/
//	//��λ�������ʽ��
//	// ��Ӧ�Ķ�����λֻҪ�����Ϊ�㣬������Ϊһ��ȡһ
//	//010100
//	//110011
//	//010000
//	/*int a = 3;
//	int b = 5;
//	int c = a | b;*/
//	//��λ��
//	//��Ӧ�Ķ�����λֻҪ��һ��Ϊһ��������Ϊ���Ϊ��
//	//0011101
//	//1011010
//	//1011111
//	int a = 5;
//	int b = 3;
//	int c = a ^ b;//��򣬶�Ӧ�Ķ�����λ��ͬλ0������Ϊ1
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
//	a = a - b;*///���ַ�ʽ���ܻ����
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