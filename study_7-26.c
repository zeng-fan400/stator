#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

//дһ����������Ϸ
//���Ի�����һ�������
//������

//void menu()
//{
//	printf("*********************************\n");
//	printf("****      1. play         0. exit         ****\n");
//	printf("*********************************\n");
//}
//
//void game()
//{
//	//���������
//	//������
//	int ret = 0;
//	int guess = 0;//������Ҳµ�����
//	//��ʱ�����������������������
//	//time_t time (time_t *timer)
//	//time_t
//	ret = rand()%100+1;//����1-100֮��������
//	while (1)
//	{
//		printf("������֣�>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��>��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("������Ч\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//int main()//���ֲ��ҷ�
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
//			printf("�Ҳ�����\n");
//	}
//	return 0;
//}

//int main()//����Ļ��������˷��ھ���
//{
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			a = i * j;
//			printf("%d*%d=%-2d ", i, j, a);//%-2d�������Ϊ��λ����
//			//�ﲻ����λ���ÿո��룬�и�������룬û���Ҷ��롣
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()//��ʮ�������е����ֵ
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int a = 0;
//	int max = 0;
//	printf("������10��������");
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
//	printf("���ֵ�ǣ�%d\n", max);
//	return 0;
//}

//int main()//����1/1-1/2+1/3-......+1/99-1/100��ֵ
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

int main()//�ػ����� -- goto���Ӧ�ó���
{
	char input[20] = { 0 };
	//shutdown -s -t 60
	//system() - ִ��ϵͳ����
	system("shutdown -s -t 60");
	again:
	printf("��ע�⣬��ĵ��Խ���60s��ػ���������룺��Ҫ�ػ�����ȡ���ػ�\n�����룺");
	scanf("%s", input);
	if (strcmp(input, "��Ҫ�ػ�") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}