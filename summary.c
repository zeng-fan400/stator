#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>

//1.�ж�����
void Prime_Number_Judgment()
{
	int i = 0;
	int j = 0;
	int n = 0;
	printf("����������Ҫ�жϵ���ֵ>:");
	scanf("%d", &i);
	if (i < 2)
		printf("error!!!\n");
	else
	{
		for (j = 2; j < sqrt(i); j++)
		{
			n = i % j;
			if (n == 0)
			{
				printf("��������\n");
				break;
			}
		}
	}
	printf("������\n");
}

//����ʵ�֣�
void Function_Run(int output)
{
	switch (output)
	{
		case 1:
		Prime_Number_Judgment();
		break;
	case 2:
		printf("����һ�����飬Ѱ������Ԫ�ص�λ��\n");
		break;
	case 3:
		printf("ɨ����Ϸ\n");
		break;
	case 4:
		printf("��������Ϸ\n");
		break;
	case 5:
		printf("��������Ϸ\n");
		break;
	case 6:
		printf("��ŵ������\n");
		break;
	}
}

//����ѡ��
int Function_Choose(int input)
{
	int output = 0;
	do
	{
		printf("����Ҫʲô���ܣ��������Ӧ�����>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("���ѡ����>: 1. �ж�һ�����Ƿ�Ϊ����\n");
			output = 1;
			break;
		case 2:
			printf("���ѡ����>: 2. ����һ�����飬Ѱ������Ԫ�ص�λ��\n");
			output = 2;
			break;
		case 3:
			printf("���ѡ����>: 3. ɨ����Ϸ\n");
			output = 3;
			break;
		case 4:
			printf("���ѡ����>: 4. ��������Ϸ\n");
			output = 4;
			break;
		case 5:
			printf("���ѡ����>: 5. ��������Ϸ\n");
			output = 5;
			break;
		case 6:
			printf("���ѡ����>: 6. ��ŵ������\n");
			output = 6;
			break;
		default:
			printf("������������������\n");
			break;
		}
	} while (input < 1 && input >6);
return output;
}


//�����嵥��
void Function_List()
{
	printf("��ѡ�����嵥���£�\n");
	printf("*** 1. �ж�һ�����Ƿ�Ϊ����                    ***\n");
	printf("*** 2. ����һ�����飬Ѱ������Ԫ�ص�λ�� ***\n");
	printf("*** 3. ɨ����Ϸ                                       ***\n");
	printf("*** 4. ��������Ϸ                                    ***\n");
	printf("*** 5. ��������Ϸ                                    ***\n");
	printf("*** 6. ��ŵ������                                   ***\n");
}

//��������
int main()
{
	int input = 0;
	int output = 0;
	Function_List();
	output = Function_Choose(input);
	Function_Run(output);
	return 0;
}