#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", password);
		if (strcmp(password , "123456")==0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	return 0;
}
//int main()
//{
//	char arr1[] = "welcome to southwest university!!!";
//	char arr2[] = "##################################";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int left = 0;
//	int right = sz-2;
//	//int right=strlen(arr1)-1;//���������鳤��
//	printf("%s\n", arr2);
//	for (left = 0, right = sz-2; left <right; left++, right--)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
//	}
//	//printf("%d\n", sz);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 5;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//		if (left > right)
//			printf("û�ҵ�\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}
//int main()//����1��+2��+...+10��
//{
//	int i = 0;
//	int a = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		a = a * i;
//		sum = sum + a;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()//����n�Ľ׳�
//{
//	int n = 0;
//	int a = 1;
//	int i = 0;//��ʼ������
//	printf("������n��ֵ��");
//	scanf("%d", &n);//������׳˵ı����Ĵ�С
//	for (i = 1; i <= n; i++)
//	{
//		a = a * i;
//	}
//	printf("n�Ľ׳��ǣ�%d\n", a);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i < 11);
//	printf("\n");
//	return 0;
//}
//int main()//����2 
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()//����forѭ��
//{
//	for (; ;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i<= 10; i++)
//	{
//		if (i == 5)
//			continue;
//			//break;
//		printf("%d ", i);
//	}
//	printf("\n");
//	return 0;
//}
//int main()//ֻ��ӡ�ַ�0���ַ�9֮����ַ� 
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	/*int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);//�������벢�����password������
//	//���ǻ������л�ʣ��һ��\n
//	//������Ҫ��\n��ȡһ��
//	while ((ch = getchar()) != '\n')//һֱ��ȡ����������Ĳ���Ҫ���ַ���ֱ����ȡ��'\n'
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");//����Y����N
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("������ȷ\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}