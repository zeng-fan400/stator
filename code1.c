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
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}
//int main()//���1-100֮�������
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
//int main()//�ж�һ�����ǲ�������
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	b = a % 2;
//	if (b == 0)
//		printf("%d��������\n", a);
//	else
//		printf("%d������\n", a);
//	return 0;
//}
// = ��ֵ����  == �ж����
//int main()//��֧�����ʹ�ô����ķ�ʽ
//{
//	int age = 0;
//	printf("һ���˵������ǣ�");
//	scanf("%d", &age);
//	printf("������˵������Ӧ�ã�");
//	if (age < 18)
//	{
//		printf("��δ������\n");
//		printf("�����\n");
//	}
//	else if (age >= 18 && age < 22)
//	{
//		printf("����ѧ\n");
//		printf("��ȷ�Լ������ķ���\n");
//	}
//	else if (age >= 22 && age < 55)
//	{
//		printf("��Ǯ\n");
//		printf("��ѧ��\n");
//	}
//	else if (age >= 55 && age < 100)
//	{
//		printf("��������\n");
//		printf("���㳡��\n");
//	}
//	else
//	{
//		printf("����\n");
//		printf("��Ϊ����\n");
//	}
//	return 0;
//}
//int main()//����scanf��������һ���˵����䣬ͬʱ���Է�֧������д��
//{
//	//int age = 20;
//	//int age = 10;
//	//int age = 200;
//	int age = 0;
//	printf("��һ���ˣ����������ǣ�\n");
//	scanf("%d", &age);
//	printf("��ô���Ǹ���");
//	if (age < 18)
//		printf("δ����\n");
//	else
//	{
//		if (age >= 18 && age < 28)
//			printf("����\n");
//		else if (age >= 28 && age < 50)
//			printf("׳��\n");
//		else if (age >= 50 && age < 90)
//			printf("����\n");
//		else
//			printf("����\n");
//	}
//	int main()//���֧���
//	{
//		int age = 15;
//	/*if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else
//		printf("����\n");*/
//	return 0;
//}
	//int main()//if������ʹ�÷�ʽ
	//{
		//int age = 10;
	/*if (age < 18)
		printf("δ����\n");
	else 
		printf("����\n");*/
	//return 0;
//}